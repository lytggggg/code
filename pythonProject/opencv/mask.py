import cv2 as cv
import argparse
import numpy as np

parser = argparse.ArgumentParser(
    description='This sample shows how to define custom OpenCV deep learning layers in Python. '
                'Holistically-Nested Edge Detection (https://arxiv.org/abs/1504.06375) neural network '
                'is used as an example model. Find a pre-trained model at https://github.com/s9xie/hed.')
parser.add_argument('--input', help='Path to image or video. Skip to capture frames from camera')
parser.add_argument('--write_video', help='Do you want to write the output video', default=False)
parser.add_argument('--prototxt', help='Path to deploy.prototxt', default='deploy.prototxt', required=False)
parser.add_argument('--caffemodel', help='Path to hed_pretrained_bsds.caffemodel',
                    default='hed_pretrained_bsds.caffemodel', required=False)
parser.add_argument('--width', help='Resize input image to a specific width', default=500, type=int)
parser.add_argument('--height', help='Resize input image to a specific height', default=500, type=int)
parser.add_argument('--savefile', help='Specifies the output video path', default='output.mp4', type=str)
args = parser.parse_args()


class CropLayer(object):
    def __init__(self, params, blobs):
        self.xstart = 0
        self.xend = 0
        self.ystart = 0
        self.yend = 0

    # Our layer receives two inputs. We need to crop the first input blob
    # to match a shape of the second one (keeping batch size and number of channels)
    def getMemoryShapes(self, inputs):
        inputShape, targetShape = inputs[0], inputs[1]
        batchSize, numChannels = inputShape[0], inputShape[1]
        height, width = targetShape[2], targetShape[3]

        self.ystart = (inputShape[2] - targetShape[2]) // 2
        self.xstart = (inputShape[3] - targetShape[3]) // 2
        self.yend = self.ystart + height
        self.xend = self.xstart + width

        return [[batchSize, numChannels, height, width]]

    def forward(self, inputs):
        return [inputs[0][:, :, self.ystart:self.yend, self.xstart:self.xend]]


cv.dnn_registerLayer('Crop', CropLayer)

# Load the model.
net = cv.dnn.readNet("f:\\moddo\\deploy.prototxt", "f:\\moddo\\hed_pretrained_bsds.caffemodel")
image = cv.imread("f:\\test\\Snipaste_2022_5.png")
inp = cv.dnn.blobFromImage(image, scalefactor=1.0, size=(300, 300),
                            mean=(20, 30, 40), swapRB=False, crop=False)
net.setInput(inp)
out = net.forward()
out = out[0, 0]
out = cv.resize(out, (inp.shape[1], inp.shape[0]))
out = 255 * out
out = out.astype(np.uint8)
out = cv.cvtColor(out, cv.COLOR_GRAY2BGR)
con = np.concatenate((inp, out), axis=1)
cv.imshow("asd",con)
cv.waitKey(0)
