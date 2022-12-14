??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ s y s t e m . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   S Y S T E M   L L   m o d u l e .  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h e   L L   S Y S T E M   d r i v e r   c o n t a i n s   a   s e t   o f   g e n e r i c   A P I s   t h a t   c a n   b e  
         u s e d   b y   u s e r :  
             ( + )   S o m e   o f   t h e   F L A S H   f e a t u r e s   n e e d   t o   b e   h a n d l e d   i n   t h e   S Y S T E M   f i l e .  
             ( + )   A c c e s s   t o   D B G C M U   r e g i s t e r s  
             ( + )   A c c e s s   t o   S Y S C F G   r e g i s t e r s  
  
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ L L _ S Y S T E M _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ L L _ S Y S T E M _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ L L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f   d e f i n e d   ( F L A S H )   | |   d e f i n e d   ( D B G M C U )  
  
 / * *   @ d e f g r o u p   S Y S T E M _ L L   S Y S T E M  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ P r i v a t e _ C o n s t a n t s   S Y S T E M   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ E x p o r t e d _ C o n s t a n t s   S Y S T E M   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
  
  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ E C _ T R A C E   D B G M C U   T R A C E   P i n   A s s i g n m e n t  
     *   @ {  
     * /  
 # d e f i n e   L L _ D B G M C U _ T R A C E _ N O N E                               0 x 0 0 0 0 0 0 0 0 U                                                                           / * ! <   T R A C E   p i n s   n o t   a s s i g n e d   ( d e f a u l t   s t a t e )   * /  
 # d e f i n e   L L _ D B G M C U _ T R A C E _ A S Y N C H                           D B G M C U _ C R _ T R A C E _ I O E N                                                         / * ! <   T R A C E   p i n   a s s i g n m e n t   f o r   A s y n c h r o n o u s   M o d e   * /  
 # d e f i n e   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 1                 ( D B G M C U _ C R _ T R A C E _ I O E N   |   D B G M C U _ C R _ T R A C E _ M O D E _ 0 )   / * ! <   T R A C E   p i n   a s s i g n m e n t   f o r   S y n c h r o n o u s   M o d e   w i t h   a   T R A C E D A T A   s i z e   o f   1   * /  
 # d e f i n e   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 2                 ( D B G M C U _ C R _ T R A C E _ I O E N   |   D B G M C U _ C R _ T R A C E _ M O D E _ 1 )   / * ! <   T R A C E   p i n   a s s i g n m e n t   f o r   S y n c h r o n o u s   M o d e   w i t h   a   T R A C E D A T A   s i z e   o f   2   * /  
 # d e f i n e   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 4                 ( D B G M C U _ C R _ T R A C E _ I O E N   |   D B G M C U _ C R _ T R A C E _ M O D E )       / * ! <   T R A C E   p i n   a s s i g n m e n t   f o r   S y n c h r o n o u s   M o d e   w i t h   a   T R A C E D A T A   s i z e   o f   4   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ E C _ A P B 1 _ G R P 1 _ S T O P _ I P   D B G M C U   A P B 1   G R P 1   S T O P   I P  
     *   @ {  
     * /  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 2 _ S T O P             D B G M C U _ C R _ D B G _ T I M 2 _ S T O P                     / * ! <   T I M 2   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 3 _ S T O P             D B G M C U _ C R _ D B G _ T I M 3 _ S T O P                     / * ! <   T I M 3   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 4 _ S T O P             D B G M C U _ C R _ D B G _ T I M 4 _ S T O P                     / * ! <   T I M 4   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 5 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 5 _ S T O P             D B G M C U _ C R _ D B G _ T I M 5 _ S T O P                     / * ! <   T I M 5   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 5 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 6 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 6 _ S T O P             D B G M C U _ C R _ D B G _ T I M 6 _ S T O P                     / * ! <   T I M 6   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 6 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 7 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 7 _ S T O P             D B G M C U _ C R _ D B G _ T I M 7 _ S T O P                     / * ! <   T I M 7   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 7 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 1 2 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 2 _ S T O P           D B G M C U _ C R _ D B G _ T I M 1 2 _ S T O P                   / * ! <   T I M 1 2   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 1 2 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 1 3 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 3 _ S T O P           D B G M C U _ C R _ D B G _ T I M 1 3 _ S T O P                   / * ! <   T I M 1 3   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 1 3 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 1 4 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 4 _ S T O P           D B G M C U _ C R _ D B G _ T I M 1 4 _ S T O P                   / * ! <   T I M 1 4   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 1 4 _ S T O P   * /  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ W W D G _ S T O P             D B G M C U _ C R _ D B G _ W W D G _ S T O P                     / * ! <   D e b u g   W i n d o w   W a t c h d o g   s t o p p e d   w h e n   C o r e   i s   h a l t e d   * /  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I W D G _ S T O P             D B G M C U _ C R _ D B G _ I W D G _ S T O P                     / * ! <   D e b u g   I n d e p e n d e n t   W a t c h d o g   s t o p p e d   w h e n   C o r e   i s   h a l t e d   * /  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I 2 C 1 _ S T O P             D B G M C U _ C R _ D B G _ I 2 C 1 _ S M B U S _ T I M E O U T   / * ! <   I 2 C 1   S M B U S   t i m e o u t   m o d e   s t o p p e d   w h e n   C o r e   i s   h a l t e d   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ I 2 C 2 _ S M B U S _ T I M E O U T )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I 2 C 2 _ S T O P             D B G M C U _ C R _ D B G _ I 2 C 2 _ S M B U S _ T I M E O U T   / * ! <   I 2 C 2   S M B U S   t i m e o u t   m o d e   s t o p p e d   w h e n   C o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ I 2 C 2 _ S M B U S _ T I M E O U T   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ C A N 1 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ C A N 1 _ S T O P             D B G M C U _ C R _ D B G _ C A N 1 _ S T O P                     / * ! <   C A N 1   d e b u g   s t o p p e d   w h e n   C o r e   i s   h a l t e d     * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ C A N 1 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ C A N 2 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 1 _ G R P 1 _ C A N 2 _ S T O P             D B G M C U _ C R _ D B G _ C A N 2 _ S T O P                     / * ! <   C A N 2   d e b u g   s t o p p e d   w h e n   C o r e   i s   h a l t e d     * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ C A N 2 _ S T O P   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ E C _ A P B 2 _ G R P 1 _ S T O P _ I P   D B G M C U   A P B 2   G R P 1   S T O P   I P  
     *   @ {  
     * /  
 # d e f i n e   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 _ S T O P             D B G M C U _ C R _ D B G _ T I M 1 _ S T O P       / * ! <   T I M 1   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 8 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 8 _ S T O P             D B G M C U _ C R _ D B G _ T I M 8 _ S T O P       / * ! <   T I M 8   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ C A N 1 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 9 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 9 _ S T O P             D B G M C U _ C R _ D B G _ T I M 9 _ S T O P       / * ! <   T I M 9   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 9 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 1 0 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 0 _ S T O P           D B G M C U _ C R _ D B G _ T I M 1 0 _ S T O P       / * ! <   T I M 1 0   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 1 0 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 1 1 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 1 _ S T O P           D B G M C U _ C R _ D B G _ T I M 1 1 _ S T O P       / * ! <   T I M 1 1   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 1 1 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 1 5 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 5 _ S T O P           D B G M C U _ C R _ D B G _ T I M 1 5 _ S T O P       / * ! <   T I M 1 5   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 1 5 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 1 6 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 6 _ S T O P           D B G M C U _ C R _ D B G _ T I M 1 6 _ S T O P       / * ! <   T I M 1 6   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 1 6 _ S T O P   * /  
 # i f   d e f i n e d ( D B G M C U _ C R _ D B G _ T I M 1 7 _ S T O P )  
 # d e f i n e   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 7 _ S T O P           D B G M C U _ C R _ D B G _ T I M 1 7 _ S T O P       / * ! <   T I M 1 7   c o u n t e r   s t o p p e d   w h e n   c o r e   i s   h a l t e d   * /  
 # e n d i f   / *   D B G M C U _ C R _ D B G _ T I M 1 7 _ S T O P   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ E C _ L A T E N C Y   F L A S H   L A T E N C Y  
     *   @ {  
     * /  
 # i f   d e f i n e d ( F L A S H _ A C R _ L A T E N C Y )  
 # d e f i n e   L L _ F L A S H _ L A T E N C Y _ 0                                   0 x 0 0 0 0 0 0 0 0 U                           / * ! <   F L A S H   Z e r o   L a t e n c y   c y c l e   * /  
 # d e f i n e   L L _ F L A S H _ L A T E N C Y _ 1                                   F L A S H _ A C R _ L A T E N C Y _ 0           / * ! <   F L A S H   O n e   L a t e n c y   c y c l e   * /  
 # d e f i n e   L L _ F L A S H _ L A T E N C Y _ 2                                   F L A S H _ A C R _ L A T E N C Y _ 1           / * ! <   F L A S H   T w o   w a i t   s t a t e s   * /  
 # e l s e  
 # e n d i f   / *   F L A S H _ A C R _ L A T E N C Y   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ E x p o r t e d _ F u n c t i o n s   S Y S T E M   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
  
  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ E F _ D B G M C U   D B G M C U  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   d e v i c e   i d e n t i f i e r  
     *   @ n o t e   F o r   L o w   D e n s i t y   d e v i c e s ,   t h e   d e v i c e   I D   i s   0 x 4 1 2  
     *   @ n o t e   F o r   M e d i u m   D e n s i t y   d e v i c e s ,   t h e   d e v i c e   I D   i s   0 x 4 1 0  
     *   @ n o t e   F o r   H i g h   D e n s i t y   d e v i c e s ,   t h e   d e v i c e   I D   i s   0 x 4 1 4  
     *   @ n o t e   F o r   X L   D e n s i t y   d e v i c e s ,   t h e   d e v i c e   I D   i s   0 x 4 3 0  
     *   @ n o t e   F o r   C o n n e c t i v i t y   L i n e   d e v i c e s ,   t h e   d e v i c e   I D   i s   0 x 4 1 8  
     *   @ r m t o l l   D B G M C U _ I D C O D E   D E V _ I D                 L L _ D B G M C U _ G e t D e v i c e I D  
     *   @ r e t v a l   V a l u e s   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D B G M C U _ G e t D e v i c e I D ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( D B G M C U - > I D C O D E ,   D B G M C U _ I D C O D E _ D E V _ I D ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   d e v i c e   r e v i s i o n   i d e n t i f i e r  
     *   @ n o t e   T h i s   f i e l d   i n d i c a t e s   t h e   r e v i s i o n   o f   t h e   d e v i c e .  
                     F o r   e x a m p l e ,   i t   i s   r e a d   a s   r e v A   - >   0 x 1 0 0 0 , f o r   L o w   D e n s i t y   d e v i c e s  
                     F o r   e x a m p l e ,   i t   i s   r e a d   a s   r e v A   - >   0 x 0 0 0 0 ,   r e v B   - >   0 x 2 0 0 0 ,   r e v Z   - >   0 x 2 0 0 1 ,   r e v 1 , 2 , 3 , X   o r   Y   - >   0 x 2 0 0 3 , f o r   M e d i u m   D e n s i t y   d e v i c e s  
                     F o r   e x a m p l e ,   i t   i s   r e a d   a s   r e v A   o r   1   - >   0 x 1 0 0 0 ,   r e v Z   - >   0 x 1 0 0 1 , r e v 1 , 2 , 3 , X   o r   Y   - >   0 x 1 0 0 3 , f o r   M e d i u m   D e n s i t y   d e v i c e s  
                     F o r   e x a m p l e ,   i t   i s   r e a d   a s   r e v A   o r   1   - >   0 x 1 0 0 3 , f o r   X L   D e n s i t y   d e v i c e s  
                     F o r   e x a m p l e ,   i t   i s   r e a d   a s   r e v A   - >   0 x 1 0 0 0 ,   r e v Z   - >   0 x 1 0 0 1   f o r     C o n n e c t i v i t y   l i n e   d e v i c e s  
     *   @ r m t o l l   D B G M C U _ I D C O D E   R E V _ I D                 L L _ D B G M C U _ G e t R e v i s i o n I D  
     *   @ r e t v a l   V a l u e s   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D B G M C U _ G e t R e v i s i o n I D ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( D B G M C U - > I D C O D E ,   D B G M C U _ I D C O D E _ R E V _ I D )   > >   D B G M C U _ I D C O D E _ R E V _ I D _ P o s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S L E E P   m o d e  
     *   @ r m t o l l   D B G M C U _ C R         D B G _ S L E E P           L L _ D B G M C U _ E n a b l e D B G S l e e p M o d e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ E n a b l e D B G S l e e p M o d e ( v o i d )  
 {  
     S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S L E E P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S L E E P   m o d e  
     *   @ r m t o l l   D B G M C U _ C R         D B G _ S L E E P           L L _ D B G M C U _ D i s a b l e D B G S l e e p M o d e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ D i s a b l e D B G S l e e p M o d e ( v o i d )  
 {  
     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S L E E P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S T O P   m o d e  
     *   @ r m t o l l   D B G M C U _ C R         D B G _ S T O P             L L _ D B G M C U _ E n a b l e D B G S t o p M o d e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ E n a b l e D B G S t o p M o d e ( v o i d )  
 {  
     S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S T O P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S T O P   m o d e  
     *   @ r m t o l l   D B G M C U _ C R         D B G _ S T O P             L L _ D B G M C U _ D i s a b l e D B G S t o p M o d e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ D i s a b l e D B G S t o p M o d e ( v o i d )  
 {  
     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S T O P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S T A N D B Y   m o d e  
     *   @ r m t o l l   D B G M C U _ C R         D B G _ S T A N D B Y       L L _ D B G M C U _ E n a b l e D B G S t a n d b y M o d e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ E n a b l e D B G S t a n d b y M o d e ( v o i d )  
 {  
     S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S T A N D B Y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S T A N D B Y   m o d e  
     *   @ r m t o l l   D B G M C U _ C R         D B G _ S T A N D B Y       L L _ D B G M C U _ D i s a b l e D B G S t a n d b y M o d e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ D i s a b l e D B G S t a n d b y M o d e ( v o i d )  
 {  
     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S T A N D B Y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   T r a c e   p i n   a s s i g n m e n t   c o n t r o l  
     *   @ r m t o l l   D B G M C U _ C R         T R A C E _ I O E N         L L _ D B G M C U _ S e t T r a c e P i n A s s i g n m e n t \ n  
     *                   D B G M C U _ C R         T R A C E _ M O D E         L L _ D B G M C U _ S e t T r a c e P i n A s s i g n m e n t  
     *   @ p a r a m     P i n A s s i g n m e n t   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ N O N E  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ A S Y N C H  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 1  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 2  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 4  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ S e t T r a c e P i n A s s i g n m e n t ( u i n t 3 2 _ t   P i n A s s i g n m e n t )  
 {  
     M O D I F Y _ R E G ( D B G M C U - > C R ,   D B G M C U _ C R _ T R A C E _ I O E N   |   D B G M C U _ C R _ T R A C E _ M O D E ,   P i n A s s i g n m e n t ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   T r a c e   p i n   a s s i g n m e n t   c o n t r o l  
     *   @ r m t o l l   D B G M C U _ C R         T R A C E _ I O E N         L L _ D B G M C U _ G e t T r a c e P i n A s s i g n m e n t \ n  
     *                   D B G M C U _ C R         T R A C E _ M O D E         L L _ D B G M C U _ G e t T r a c e P i n A s s i g n m e n t  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ N O N E  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ A S Y N C H  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 1  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 2  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ T R A C E _ S Y N C H _ S I Z E 4  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D B G M C U _ G e t T r a c e P i n A s s i g n m e n t ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ T R A C E _ I O E N   |   D B G M C U _ C R _ T R A C E _ M O D E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     F r e e z e   A P B 1   p e r i p h e r a l s   ( g r o u p 1   p e r i p h e r a l s )  
     *   @ r m t o l l   D B G M C U _ C R _ A P B 1             D B G _ T I M 2 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 3 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 4 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 5 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 6 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 7 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 1 2 _ S T O P                     L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 1 3 _ S T O P                     L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 1 4 _ S T O P                     L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ R T C _ S T O P                         L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ W W D G _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ I W D G _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ I 2 C 1 _ S M B U S _ T I M E O U T     L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ I 2 C 2 _ S M B U S _ T I M E O U T     L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ C A N 1 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ C A N 2 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 2 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 3 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 4 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 5 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 6 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 7 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 2 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 3 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 4 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ W W D G _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I W D G _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I 2 C 1 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I 2 C 2 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ C A N 1 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ C A N 2 _ S T O P   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ A P B 1 _ G R P 1 _ F r e e z e P e r i p h ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     S E T _ B I T ( D B G M C U - > C R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     U n f r e e z e   A P B 1   p e r i p h e r a l s   ( g r o u p 1   p e r i p h e r a l s )  
     *   @ r m t o l l   D B G M C U _ C R _ A P B 1             D B G _ T I M 2 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 3 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 4 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 5 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 6 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 7 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 1 2 _ S T O P                     L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 1 3 _ S T O P                     L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ T I M 1 4 _ S T O P                     L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ R T C _ S T O P                         L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ W W D G _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ I W D G _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ I 2 C 1 _ S M B U S _ T I M E O U T     L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ I 2 C 2 _ S M B U S _ T I M E O U T     L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ C A N 1 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 1             D B G _ C A N 2 _ S T O P                       L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 2 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 3 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 4 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 5 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 6 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 7 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 2 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 3 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ T I M 1 4 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ R T C _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ W W D G _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I W D G _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I 2 C 1 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ I 2 C 2 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ C A N 1 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 1 _ G R P 1 _ C A N 2 _ S T O P   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ A P B 1 _ G R P 1 _ U n F r e e z e P e r i p h ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     C L E A R _ B I T ( D B G M C U - > C R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     F r e e z e   A P B 2   p e r i p h e r a l s  
     *   @ r m t o l l   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 _ S T O P         L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 8 _ S T O P         L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 9 _ S T O P         L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 0 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 1 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 5 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 6 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 7 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 8 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 9 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 0 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 1 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 5 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 6 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 7 _ S T O P   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     S E T _ B I T ( D B G M C U - > C R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     U n f r e e z e   A P B 2   p e r i p h e r a l s  
     *   @ r m t o l l   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 _ S T O P         L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 8 _ S T O P         L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 9 _ S T O P         L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 0 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 1 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 5 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 6 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h \ n  
     *                   D B G M C U _ C R _ A P B 2             D B G _ T I M 1 7 _ S T O P       L L _ D B G M C U _ A P B 2 _ G R P 1 _ F r e e z e P e r i p h  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 _ S T O P  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 8 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 9 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 0 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 1 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 5 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 6 _ S T O P   ( * )  
     *                   @ a r g   @ r e f   L L _ D B G M C U _ A P B 2 _ G R P 1 _ T I M 1 7 _ S T O P   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D B G M C U _ A P B 2 _ G R P 1 _ U n F r e e z e P e r i p h ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     C L E A R _ B I T ( D B G M C U - > C R ,   P e r i p h s ) ;  
 }  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( F L A S H _ A C R _ L A T E N C Y )  
 / * *   @ d e f g r o u p   S Y S T E M _ L L _ E F _ F L A S H   F L A S H  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   F L A S H   L a t e n c y  
     *   @ r m t o l l   F L A S H _ A C R         L A T E N C Y               L L _ F L A S H _ S e t L a t e n c y  
     *   @ p a r a m     L a t e n c y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ F L A S H _ L A T E N C Y _ 0  
     *                   @ a r g   @ r e f   L L _ F L A S H _ L A T E N C Y _ 1  
     *                   @ a r g   @ r e f   L L _ F L A S H _ L A T E N C Y _ 2  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ F L A S H _ S e t L a t e n c y ( u i n t 3 2 _ t   L a t e n c y )  
 {  
     M O D I F Y _ R E G ( F L A S H - > A C R ,   F L A S H _ A C R _ L A T E N C Y ,   L a t e n c y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   F L A S H   L a t e n c y  
     *   @ r m t o l l   F L A S H _ A C R         L A T E N C Y               L L _ F L A S H _ G e t L a t e n c y  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ F L A S H _ L A T E N C Y _ 0  
     *                   @ a r g   @ r e f   L L _ F L A S H _ L A T E N C Y _ 1  
     *                   @ a r g   @ r e f   L L _ F L A S H _ L A T E N C Y _ 2  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ F L A S H _ G e t L a t e n c y ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( F L A S H - > A C R ,   F L A S H _ A C R _ L A T E N C Y ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   P r e f e t c h  
     *   @ r m t o l l   F L A S H _ A C R         P R F T B E                 L L _ F L A S H _ E n a b l e P r e f e t c h  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ F L A S H _ E n a b l e P r e f e t c h ( v o i d )  
 {  
     S E T _ B I T ( F L A S H - > A C R ,   F L A S H _ A C R _ P R F T B E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   P r e f e t c h  
     *   @ r m t o l l   F L A S H _ A C R         P R F T B E                 L L _ F L A S H _ D i s a b l e P r e f e t c h  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ F L A S H _ D i s a b l e P r e f e t c h ( v o i d )  
 {  
     C L E A R _ B I T ( F L A S H - > A C R ,   F L A S H _ A C R _ P R F T B E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   P r e f e t c h   b u f f e r   i s   e n a b l e d  
     *   @ r m t o l l   F L A S H _ A C R         P R F T B S                 L L _ F L A S H _ I s P r e f e t c h E n a b l e d  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ F L A S H _ I s P r e f e t c h E n a b l e d ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( F L A S H - > A C R ,   F L A S H _ A C R _ P R F T B S )   = =   ( F L A S H _ A C R _ P R F T B S ) ) ;  
 }  
  
 # e n d i f   / *   F L A S H _ A C R _ L A T E N C Y   * /  
 / * *  
     *   @ b r i e f     E n a b l e   F l a s h   H a l f   C y c l e   A c c e s s  
     *   @ r m t o l l   F L A S H _ A C R         H L F C Y A                 L L _ F L A S H _ E n a b l e H a l f C y c l e A c c e s s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ F L A S H _ E n a b l e H a l f C y c l e A c c e s s ( v o i d )  
 {  
     S E T _ B I T ( F L A S H - > A C R ,   F L A S H _ A C R _ H L F C Y A ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   F l a s h   H a l f   C y c l e   A c c e s s  
     *   @ r m t o l l   F L A S H _ A C R         H L F C Y A                 L L _ F L A S H _ D i s a b l e H a l f C y c l e A c c e s s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ F L A S H _ D i s a b l e H a l f C y c l e A c c e s s ( v o i d )  
 {  
     C L E A R _ B I T ( F L A S H - > A C R ,   F L A S H _ A C R _ H L F C Y A ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f     F l a s h   H a l f   C y c l e   A c c e s s   i s   e n a b l e d   o r   n o t  
     *   @ r m t o l l   F L A S H _ A C R         H L F C Y A                 L L _ F L A S H _ I s H a l f C y c l e A c c e s s E n a b l e d  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ F L A S H _ I s H a l f C y c l e A c c e s s E n a b l e d ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( F L A S H - > A C R ,   F L A S H _ A C R _ H L F C Y A )   = =   ( F L A S H _ A C R _ H L F C Y A ) ) ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   d e f i n e d   ( F L A S H )   | |   d e f i n e d   ( D B G M C U )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ L L _ S Y S T E M _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  