??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ t i m . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   T I M   H A L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ T I M _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ T I M _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ T y p e s   T I M   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     T I M   T i m e   b a s e   C o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   P r e s c a l e r ;                   / * ! <   S p e c i f i e s   t h e   p r e s c a l e r   v a l u e   u s e d   t o   d i v i d e   t h e   T I M   c l o c k .  
                                                                       T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F   * /  
  
     u i n t 3 2 _ t   C o u n t e r M o d e ;               / * ! <   S p e c i f i e s   t h e   c o u n t e r   m o d e .  
                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ C o u n t e r _ M o d e   * /  
  
     u i n t 3 2 _ t   P e r i o d ;                         / * ! <   S p e c i f i e s   t h e   p e r i o d   v a l u e   t o   b e   l o a d e d   i n t o   t h e   a c t i v e  
                                                                       A u t o - R e l o a d   R e g i s t e r   a t   t h e   n e x t   u p d a t e   e v e n t .  
                                                                       T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F .     * /  
  
     u i n t 3 2 _ t   C l o c k D i v i s i o n ;           / * ! <   S p e c i f i e s   t h e   c l o c k   d i v i s i o n .  
                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ C l o c k D i v i s i o n   * /  
  
     u i n t 3 2 _ t   R e p e t i t i o n C o u n t e r ;     / * ! <   S p e c i f i e s   t h e   r e p e t i t i o n   c o u n t e r   v a l u e .   E a c h   t i m e   t h e   R C R   d o w n c o u n t e r  
                                                                         r e a c h e s   z e r o ,   a n   u p d a t e   e v e n t   i s   g e n e r a t e d   a n d   c o u n t i n g   r e s t a r t s  
                                                                         f r o m   t h e   R C R   v a l u e   ( N ) .  
                                                                         T h i s   m e a n s   i n   P W M   m o d e   t h a t   ( N + 1 )   c o r r e s p o n d s   t o :  
                                                                                 -   t h e   n u m b e r   o f   P W M   p e r i o d s   i n   e d g e - a l i g n e d   m o d e  
                                                                                 -   t h e   n u m b e r   o f   h a l f   P W M   p e r i o d   i n   c e n t e r - a l i g n e d   m o d e  
                                                                           G P   t i m e r s :   t h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d  
                                                                           M a x _ D a t a   =   0 x F F .  
                                                                           A d v a n c e d   t i m e r s :   t h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d  
                                                                           M a x _ D a t a   =   0 x F F F F .   * /  
  
     u i n t 3 2 _ t   A u t o R e l o a d P r e l o a d ;     / * ! <   S p e c i f i e s   t h e   a u t o - r e l o a d   p r e l o a d .  
                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ A u t o R e l o a d P r e l o a d   * /  
 }   T I M _ B a s e _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   O u t p u t   C o m p a r e   C o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   O C M o d e ;                 / * ! <   S p e c i f i e s   t h e   T I M   m o d e .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ a n d _ P W M _ m o d e s   * /  
  
     u i n t 3 2 _ t   P u l s e ;                   / * ! <   S p e c i f i e s   t h e   p u l s e   v a l u e   t o   b e   l o a d e d   i n t o   t h e   C a p t u r e   C o m p a r e   R e g i s t e r .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F   * /  
  
     u i n t 3 2 _ t   O C P o l a r i t y ;         / * ! <   S p e c i f i e s   t h e   o u t p u t   p o l a r i t y .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   O C N P o l a r i t y ;       / * ! <   S p e c i f i e s   t h e   c o m p l e m e n t a r y   o u t p u t   p o l a r i t y .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ N _ P o l a r i t y  
                                                               @ n o t e   T h i s   p a r a m e t e r   i s   v a l i d   o n l y   f o r   t i m e r   i n s t a n c e s   s u p p o r t i n g   b r e a k   f e a t u r e .   * /  
  
     u i n t 3 2 _ t   O C F a s t M o d e ;         / * ! <   S p e c i f i e s   t h e   F a s t   m o d e   s t a t e .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ F a s t _ S t a t e  
                                                               @ n o t e   T h i s   p a r a m e t e r   i s   v a l i d   o n l y   i n   P W M 1   a n d   P W M 2   m o d e .   * /  
  
  
     u i n t 3 2 _ t   O C I d l e S t a t e ;       / * ! <   S p e c i f i e s   t h e   T I M   O u t p u t   C o m p a r e   p i n   s t a t e   d u r i n g   I d l e   s t a t e .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ I d l e _ S t a t e  
                                                               @ n o t e   T h i s   p a r a m e t e r   i s   v a l i d   o n l y   f o r   t i m e r   i n s t a n c e s   s u p p o r t i n g   b r e a k   f e a t u r e .   * /  
  
     u i n t 3 2 _ t   O C N I d l e S t a t e ;     / * ! <   S p e c i f i e s   t h e   T I M   O u t p u t   C o m p a r e   p i n   s t a t e   d u r i n g   I d l e   s t a t e .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ N _ I d l e _ S t a t e  
                                                               @ n o t e   T h i s   p a r a m e t e r   i s   v a l i d   o n l y   f o r   t i m e r   i n s t a n c e s   s u p p o r t i n g   b r e a k   f e a t u r e .   * /  
 }   T I M _ O C _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   O n e   P u l s e   M o d e   C o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   O C M o d e ;                 / * ! <   S p e c i f i e s   t h e   T I M   m o d e .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ a n d _ P W M _ m o d e s   * /  
  
     u i n t 3 2 _ t   P u l s e ;                   / * ! <   S p e c i f i e s   t h e   p u l s e   v a l u e   t o   b e   l o a d e d   i n t o   t h e   C a p t u r e   C o m p a r e   R e g i s t e r .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F   * /  
  
     u i n t 3 2 _ t   O C P o l a r i t y ;         / * ! <   S p e c i f i e s   t h e   o u t p u t   p o l a r i t y .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   O C N P o l a r i t y ;       / * ! <   S p e c i f i e s   t h e   c o m p l e m e n t a r y   o u t p u t   p o l a r i t y .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ N _ P o l a r i t y  
                                                               @ n o t e   T h i s   p a r a m e t e r   i s   v a l i d   o n l y   f o r   t i m e r   i n s t a n c e s   s u p p o r t i n g   b r e a k   f e a t u r e .   * /  
  
     u i n t 3 2 _ t   O C I d l e S t a t e ;       / * ! <   S p e c i f i e s   t h e   T I M   O u t p u t   C o m p a r e   p i n   s t a t e   d u r i n g   I d l e   s t a t e .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ I d l e _ S t a t e  
                                                               @ n o t e   T h i s   p a r a m e t e r   i s   v a l i d   o n l y   f o r   t i m e r   i n s t a n c e s   s u p p o r t i n g   b r e a k   f e a t u r e .   * /  
  
     u i n t 3 2 _ t   O C N I d l e S t a t e ;     / * ! <   S p e c i f i e s   t h e   T I M   O u t p u t   C o m p a r e   p i n   s t a t e   d u r i n g   I d l e   s t a t e .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O u t p u t _ C o m p a r e _ N _ I d l e _ S t a t e  
                                                               @ n o t e   T h i s   p a r a m e t e r   i s   v a l i d   o n l y   f o r   t i m e r   i n s t a n c e s   s u p p o r t i n g   b r e a k   f e a t u r e .   * /  
  
     u i n t 3 2 _ t   I C P o l a r i t y ;         / * ! <   S p e c i f i e s   t h e   a c t i v e   e d g e   o f   t h e   i n p u t   s i g n a l .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   I C S e l e c t i o n ;       / * ! <   S p e c i f i e s   t h e   i n p u t .  
                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ S e l e c t i o n   * /  
  
     u i n t 3 2 _ t   I C F i l t e r ;             / * ! <   S p e c i f i e s   t h e   i n p u t   c a p t u r e   f i l t e r .  
                                                             T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F   * /  
 }   T I M _ O n e P u l s e _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   I n p u t   C a p t u r e   C o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t     I C P o l a r i t y ;     / * ! <   S p e c i f i e s   t h e   a c t i v e   e d g e   o f   t h e   i n p u t   s i g n a l .  
                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   I C S e l e c t i o n ;     / * ! <   S p e c i f i e s   t h e   i n p u t .  
                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ S e l e c t i o n   * /  
  
     u i n t 3 2 _ t   I C P r e s c a l e r ;     / * ! <   S p e c i f i e s   t h e   I n p u t   C a p t u r e   P r e s c a l e r .  
                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ P r e s c a l e r   * /  
  
     u i n t 3 2 _ t   I C F i l t e r ;           / * ! <   S p e c i f i e s   t h e   i n p u t   c a p t u r e   f i l t e r .  
                                                             T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F   * /  
 }   T I M _ I C _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   E n c o d e r   C o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   E n c o d e r M o d e ;       / * ! <   S p e c i f i e s   t h e   a c t i v e   e d g e   o f   t h e   i n p u t   s i g n a l .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ E n c o d e r _ M o d e   * /  
  
     u i n t 3 2 _ t   I C 1 P o l a r i t y ;       / * ! <   S p e c i f i e s   t h e   a c t i v e   e d g e   o f   t h e   i n p u t   s i g n a l .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ E n c o d e r _ I n p u t _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   I C 1 S e l e c t i o n ;     / * ! <   S p e c i f i e s   t h e   i n p u t .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ S e l e c t i o n   * /  
  
     u i n t 3 2 _ t   I C 1 P r e s c a l e r ;     / * ! <   S p e c i f i e s   t h e   I n p u t   C a p t u r e   P r e s c a l e r .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ P r e s c a l e r   * /  
  
     u i n t 3 2 _ t   I C 1 F i l t e r ;           / * ! <   S p e c i f i e s   t h e   i n p u t   c a p t u r e   f i l t e r .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F   * /  
  
     u i n t 3 2 _ t   I C 2 P o l a r i t y ;       / * ! <   S p e c i f i e s   t h e   a c t i v e   e d g e   o f   t h e   i n p u t   s i g n a l .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ E n c o d e r _ I n p u t _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   I C 2 S e l e c t i o n ;     / * ! <   S p e c i f i e s   t h e   i n p u t .  
                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ S e l e c t i o n   * /  
  
     u i n t 3 2 _ t   I C 2 P r e s c a l e r ;     / * ! <   S p e c i f i e s   t h e   I n p u t   C a p t u r e   P r e s c a l e r .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ P r e s c a l e r   * /  
  
     u i n t 3 2 _ t   I C 2 F i l t e r ;           / * ! <   S p e c i f i e s   t h e   i n p u t   c a p t u r e   f i l t e r .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F   * /  
 }   T I M _ E n c o d e r _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     C l o c k   C o n f i g u r a t i o n   H a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   C l o c k S o u r c e ;           / * ! <   T I M   c l o c k   s o u r c e s  
                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ C l o c k _ S o u r c e   * /  
     u i n t 3 2 _ t   C l o c k P o l a r i t y ;       / * ! <   T I M   c l o c k   p o l a r i t y  
                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ C l o c k _ P o l a r i t y   * /  
     u i n t 3 2 _ t   C l o c k P r e s c a l e r ;     / * ! <   T I M   c l o c k   p r e s c a l e r  
                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ C l o c k _ P r e s c a l e r   * /  
     u i n t 3 2 _ t   C l o c k F i l t e r ;           / * ! <   T I M   c l o c k   f i l t e r  
                                                                   T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F   * /  
 }   T I M _ C l o c k C o n f i g T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   C l e a r   I n p u t   C o n f i g u r a t i o n   H a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   C l e a r I n p u t S t a t e ;             / * ! <   T I M   c l e a r   I n p u t   s t a t e  
                                                                             T h i s   p a r a m e t e r   c a n   b e   E N A B L E   o r   D I S A B L E   * /  
     u i n t 3 2 _ t   C l e a r I n p u t S o u r c e ;           / * ! <   T I M   c l e a r   I n p u t   s o u r c e s  
                                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ C l e a r I n p u t _ S o u r c e   * /  
     u i n t 3 2 _ t   C l e a r I n p u t P o l a r i t y ;       / * ! <   T I M   C l e a r   I n p u t   p o l a r i t y  
                                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ C l e a r I n p u t _ P o l a r i t y   * /  
     u i n t 3 2 _ t   C l e a r I n p u t P r e s c a l e r ;     / * ! <   T I M   C l e a r   I n p u t   p r e s c a l e r  
                                                                             T h i s   p a r a m e t e r   m u s t   b e   0 :   W h e n   O C R e f   c l e a r   f e a t u r e   i s   u s e d   w i t h   E T R   s o u r c e ,  
                                                                             E T R   p r e s c a l e r   m u s t   b e   o f f   * /  
     u i n t 3 2 _ t   C l e a r I n p u t F i l t e r ;           / * ! <   T I M   C l e a r   I n p u t   f i l t e r  
                                                                             T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F   * /  
 }   T I M _ C l e a r I n p u t C o n f i g T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   M a s t e r   c o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t     M a s t e r O u t p u t T r i g g e r ;       / * ! <   T r i g g e r   o u t p u t   ( T R G O )   s e l e c t i o n  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ M a s t e r _ M o d e _ S e l e c t i o n   * /  
     u i n t 3 2 _ t     M a s t e r S l a v e M o d e ;               / * ! <   M a s t e r / s l a v e   m o d e   s e l e c t i o n  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ M a s t e r _ S l a v e _ M o d e  
                                                                                 @ n o t e   W h e n   t h e   M a s t e r / s l a v e   m o d e   i s   e n a b l e d ,   t h e   e f f e c t   o f  
                                                                                 a n   e v e n t   o n   t h e   t r i g g e r   i n p u t   ( T R G I )   i s   d e l a y e d   t o   a l l o w   a  
                                                                                 p e r f e c t   s y n c h r o n i z a t i o n   b e t w e e n   t h e   c u r r e n t   t i m e r   a n d   i t s  
                                                                                 s l a v e s   ( t h r o u g h   T R G O ) .   I t   i s   n o t   m a n d a t o r y   i n   c a s e   o f   t i m e r  
                                                                                 s y n c h r o n i z a t i o n   m o d e .   * /  
 }   T I M _ M a s t e r C o n f i g T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   S l a v e   c o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t     S l a v e M o d e ;                   / * ! <   S l a v e   m o d e   s e l e c t i o n  
                                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ S l a v e _ M o d e   * /  
     u i n t 3 2 _ t     I n p u t T r i g g e r ;             / * ! <   I n p u t   T r i g g e r   s o u r c e  
                                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ T r i g g e r _ S e l e c t i o n   * /  
     u i n t 3 2 _ t     T r i g g e r P o l a r i t y ;       / * ! <   I n p u t   T r i g g e r   p o l a r i t y  
                                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ T r i g g e r _ P o l a r i t y   * /  
     u i n t 3 2 _ t     T r i g g e r P r e s c a l e r ;     / * ! <   I n p u t   t r i g g e r   p r e s c a l e r  
                                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ T r i g g e r _ P r e s c a l e r   * /  
     u i n t 3 2 _ t     T r i g g e r F i l t e r ;           / * ! <   I n p u t   t r i g g e r   f i l t e r  
                                                                         T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F     * /  
  
 }   T I M _ S l a v e C o n f i g T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   B r e a k   i n p u t ( s )   a n d   D e a d   t i m e   c o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     *   @ n o t e       2   b r e a k   i n p u t s   c a n   b e   c o n f i g u r e d   ( B K I N   a n d   B K I N 2 )   w i t h   c o n f i g u r a b l e  
     *                 f i l t e r   a n d   p o l a r i t y .  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   O f f S t a t e R u n M o d e ;             / * ! <   T I M   o f f   s t a t e   i n   r u n   m o d e ,   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O S S R _ O f f _ S t a t e _ S e l e c t i o n _ f o r _ R u n _ m o d e _ s t a t e   * /  
  
     u i n t 3 2 _ t   O f f S t a t e I D L E M o d e ;           / * ! <   T I M   o f f   s t a t e   i n   I D L E   m o d e ,   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ O S S I _ O f f _ S t a t e _ S e l e c t i o n _ f o r _ I d l e _ m o d e _ s t a t e   * /  
  
     u i n t 3 2 _ t   L o c k L e v e l ;                         / * ! <   T I M   L o c k   l e v e l ,   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ L o c k _ l e v e l   * /  
  
     u i n t 3 2 _ t   D e a d T i m e ;                           / * ! <   T I M   d e a d   T i m e ,   T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F   * /  
  
     u i n t 3 2 _ t   B r e a k S t a t e ;                       / * ! <   T I M   B r e a k   S t a t e ,   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ B r e a k _ I n p u t _ e n a b l e _ d i s a b l e   * /  
  
     u i n t 3 2 _ t   B r e a k P o l a r i t y ;                 / * ! <   T I M   B r e a k   i n p u t   p o l a r i t y ,   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ B r e a k _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   B r e a k F i l t e r ;                     / * ! <   S p e c i f i e s   t h e   b r e a k   i n p u t   f i l t e r . T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F   * /  
  
     u i n t 3 2 _ t   A u t o m a t i c O u t p u t ;             / * ! <   T I M   A u t o m a t i c   O u t p u t   E n a b l e   s t a t e ,   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ A O E _ B i t _ S e t _ R e s e t   * /  
  
 }   T I M _ B r e a k D e a d T i m e C o n f i g T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ T I M _ S T A T E _ R E S E T                           =   0 x 0 0 U ,         / * ! <   P e r i p h e r a l   n o t   y e t   i n i t i a l i z e d   o r   d i s a b l e d     * /  
     H A L _ T I M _ S T A T E _ R E A D Y                           =   0 x 0 1 U ,         / * ! <   P e r i p h e r a l   I n i t i a l i z e d   a n d   r e a d y   f o r   u s e         * /  
     H A L _ T I M _ S T A T E _ B U S Y                             =   0 x 0 2 U ,         / * ! <   A n   i n t e r n a l   p r o c e s s   i s   o n g o i n g                             * /  
     H A L _ T I M _ S T A T E _ T I M E O U T                       =   0 x 0 3 U ,         / * ! <   T i m e o u t   s t a t e                                                               * /  
     H A L _ T I M _ S T A T E _ E R R O R                           =   0 x 0 4 U           / * ! <   R e c e p t i o n   p r o c e s s   i s   o n g o i n g                                 * /  
 }   H A L _ T I M _ S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T I M   C h a n n e l   S t a t e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T                           =   0 x 0 0 U ,         / * ! <   T I M   C h a n n e l   i n i t i a l   s t a t e                                                   * /  
     H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y                           =   0 x 0 1 U ,         / * ! <   T I M   C h a n n e l   r e a d y   f o r   u s e                                                   * /  
     H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y                             =   0 x 0 2 U ,         / * ! <   A n   i n t e r n a l   p r o c e s s   i s   o n g o i n g   o n   t h e   T I M   c h a n n e l   * /  
 }   H A L _ T I M _ C h a n n e l S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     D M A   B u r s t   S t a t e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ D M A _ B U R S T _ S T A T E _ R E S E T                           =   0 x 0 0 U ,         / * ! <   D M A   B u r s t   i n i t i a l   s t a t e   * /  
     H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y                           =   0 x 0 1 U ,         / * ! <   D M A   B u r s t   r e a d y   f o r   u s e   * /  
     H A L _ D M A _ B U R S T _ S T A T E _ B U S Y                             =   0 x 0 2 U ,         / * ! <   O n g o i n g   D M A   B u r s t               * /  
 }   H A L _ T I M _ D M A B u r s t S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   A c t i v e   c h a n n e l   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ T I M _ A C T I V E _ C H A N N E L _ 1                 =   0 x 0 1 U ,         / * ! <   T h e   a c t i v e   c h a n n e l   i s   1           * /  
     H A L _ T I M _ A C T I V E _ C H A N N E L _ 2                 =   0 x 0 2 U ,         / * ! <   T h e   a c t i v e   c h a n n e l   i s   2           * /  
     H A L _ T I M _ A C T I V E _ C H A N N E L _ 3                 =   0 x 0 4 U ,         / * ! <   T h e   a c t i v e   c h a n n e l   i s   3           * /  
     H A L _ T I M _ A C T I V E _ C H A N N E L _ 4                 =   0 x 0 8 U ,         / * ! <   T h e   a c t i v e   c h a n n e l   i s   4           * /  
     H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D     =   0 x 0 0 U           / * ! <   A l l   a c t i v e   c h a n n e l s   c l e a r e d   * /  
 }   H A L _ T I M _ A c t i v e C h a n n e l ;  
  
 / * *  
     *   @ b r i e f     T I M   T i m e   B a s e   H a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 t y p e d e f   s t r u c t   _ _ T I M _ H a n d l e T y p e D e f  
 # e l s e  
 t y p e d e f   s t r u c t  
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * /  
 {  
     T I M _ T y p e D e f                                                 * I n s t a n c e ;                   / * ! <   R e g i s t e r   b a s e   a d d r e s s                                                           * /  
     T I M _ B a s e _ I n i t T y p e D e f                               I n i t ;                             / * ! <   T I M   T i m e   B a s e   r e q u i r e d   p a r a m e t e r s                                   * /  
     H A L _ T I M _ A c t i v e C h a n n e l                             C h a n n e l ;                       / * ! <   A c t i v e   c h a n n e l                                                                         * /  
     D M A _ H a n d l e T y p e D e f                                     * h d m a [ 7 ] ;                     / * ! <   D M A   H a n d l e r s   a r r a y  
                                                                                                                           T h i s   a r r a y   i s   a c c e s s e d   b y   a   @ r e f   D M A _ H a n d l e _ i n d e x   * /  
     H A L _ L o c k T y p e D e f                                         L o c k ;                             / * ! <   L o c k i n g   o b j e c t                                                                         * /  
     _ _ I O   H A L _ T I M _ S t a t e T y p e D e f                     S t a t e ;                           / * ! <   T I M   o p e r a t i o n   s t a t e                                                               * /  
     _ _ I O   H A L _ T I M _ C h a n n e l S t a t e T y p e D e f       C h a n n e l S t a t e [ 4 ] ;       / * ! <   T I M   c h a n n e l   o p e r a t i o n   s t a t e                                               * /  
     _ _ I O   H A L _ T I M _ C h a n n e l S t a t e T y p e D e f       C h a n n e l N S t a t e [ 4 ] ;     / * ! <   T I M   c o m p l e m e n t a r y   c h a n n e l   o p e r a t i o n   s t a t e                   * /  
     _ _ I O   H A L _ T I M _ D M A B u r s t S t a t e T y p e D e f     D M A B u r s t S t a t e ;           / * ! <   D M A   b u r s t   o p e r a t i o n   s t a t e                                                   * /  
  
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   B a s e _ M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                             / * ! <   T I M   B a s e   M s p   I n i t   C a l l b a c k                                                             * /  
     v o i d   ( *   B a s e _ M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                         / * ! <   T I M   B a s e   M s p   D e I n i t   C a l l b a c k                                                         * /  
     v o i d   ( *   I C _ M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                                 / * ! <   T I M   I C   M s p   I n i t   C a l l b a c k                                                                 * /  
     v o i d   ( *   I C _ M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                             / * ! <   T I M   I C   M s p   D e I n i t   C a l l b a c k                                                             * /  
     v o i d   ( *   O C _ M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                                 / * ! <   T I M   O C   M s p   I n i t   C a l l b a c k                                                                 * /  
     v o i d   ( *   O C _ M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                             / * ! <   T I M   O C   M s p   D e I n i t   C a l l b a c k                                                             * /  
     v o i d   ( *   P W M _ M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                               / * ! <   T I M   P W M   M s p   I n i t   C a l l b a c k                                                               * /  
     v o i d   ( *   P W M _ M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                           / * ! <   T I M   P W M   M s p   D e I n i t   C a l l b a c k                                                           * /  
     v o i d   ( *   O n e P u l s e _ M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                     / * ! <   T I M   O n e   P u l s e   M s p   I n i t   C a l l b a c k                                                   * /  
     v o i d   ( *   O n e P u l s e _ M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                 / * ! <   T I M   O n e   P u l s e   M s p   D e I n i t   C a l l b a c k                                               * /  
     v o i d   ( *   E n c o d e r _ M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                       / * ! <   T I M   E n c o d e r   M s p   I n i t   C a l l b a c k                                                       * /  
     v o i d   ( *   E n c o d e r _ M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                   / * ! <   T I M   E n c o d e r   M s p   D e I n i t   C a l l b a c k                                                   * /  
     v o i d   ( *   H a l l S e n s o r _ M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                 / * ! <   T I M   H a l l   S e n s o r   M s p   I n i t   C a l l b a c k                                               * /  
     v o i d   ( *   H a l l S e n s o r _ M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;             / * ! <   T I M   H a l l   S e n s o r   M s p   D e I n i t   C a l l b a c k                                           * /  
     v o i d   ( *   P e r i o d E l a p s e d C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                           / * ! <   T I M   P e r i o d   E l a p s e d   C a l l b a c k                                                           * /  
     v o i d   ( *   P e r i o d E l a p s e d H a l f C p l t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;           / * ! <   T I M   P e r i o d   E l a p s e d   h a l f   c o m p l e t e   C a l l b a c k                               * /  
     v o i d   ( *   T r i g g e r C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                                       / * ! <   T I M   T r i g g e r   C a l l b a c k                                                                         * /  
     v o i d   ( *   T r i g g e r H a l f C p l t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                       / * ! <   T I M   T r i g g e r   h a l f   c o m p l e t e   C a l l b a c k                                             * /  
     v o i d   ( *   I C _ C a p t u r e C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                                 / * ! <   T I M   I n p u t   C a p t u r e   C a l l b a c k                                                             * /  
     v o i d   ( *   I C _ C a p t u r e H a l f C p l t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                 / * ! <   T I M   I n p u t   C a p t u r e   h a l f   c o m p l e t e   C a l l b a c k                                 * /  
     v o i d   ( *   O C _ D e l a y E l a p s e d C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                       / * ! <   T I M   O u t p u t   C o m p a r e   D e l a y   E l a p s e d   C a l l b a c k                               * /  
     v o i d   ( *   P W M _ P u l s e F i n i s h e d C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                   / * ! <   T I M   P W M   P u l s e   F i n i s h e d   C a l l b a c k                                                   * /  
     v o i d   ( *   P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;   / * ! <   T I M   P W M   P u l s e   F i n i s h e d   h a l f   c o m p l e t e   C a l l b a c k                       * /  
     v o i d   ( *   E r r o r C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                                           / * ! <   T I M   E r r o r   C a l l b a c k                                                                             * /  
     v o i d   ( *   C o m m u t a t i o n C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                               / * ! <   T I M   C o m m u t a t i o n   C a l l b a c k                                                                 * /  
     v o i d   ( *   C o m m u t a t i o n H a l f C p l t C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;               / * ! <   T I M   C o m m u t a t i o n   h a l f   c o m p l e t e   C a l l b a c k                                     * /  
     v o i d   ( *   B r e a k C a l l b a c k ) ( s t r u c t   _ _ T I M _ H a n d l e T y p e D e f   * h t i m ) ;                                           / * ! <   T I M   B r e a k   C a l l b a c k                                                                             * /  
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * /  
 }   T I M _ H a n d l e T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   T I M   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ T I M _ B A S E _ M S P I N I T _ C B _ I D                             =   0 x 0 0 U       / * ! <   T I M   B a s e   M s p I n i t   C a l l b a c k   I D                                                             * /  
     ,   H A L _ T I M _ B A S E _ M S P D E I N I T _ C B _ I D                     =   0 x 0 1 U       / * ! <   T I M   B a s e   M s p D e I n i t   C a l l b a c k   I D                                                         * /  
     ,   H A L _ T I M _ I C _ M S P I N I T _ C B _ I D                             =   0 x 0 2 U       / * ! <   T I M   I C   M s p I n i t   C a l l b a c k   I D                                                                 * /  
     ,   H A L _ T I M _ I C _ M S P D E I N I T _ C B _ I D                         =   0 x 0 3 U       / * ! <   T I M   I C   M s p D e I n i t   C a l l b a c k   I D                                                             * /  
     ,   H A L _ T I M _ O C _ M S P I N I T _ C B _ I D                             =   0 x 0 4 U       / * ! <   T I M   O C   M s p I n i t   C a l l b a c k   I D                                                                 * /  
     ,   H A L _ T I M _ O C _ M S P D E I N I T _ C B _ I D                         =   0 x 0 5 U       / * ! <   T I M   O C   M s p D e I n i t   C a l l b a c k   I D                                                             * /  
     ,   H A L _ T I M _ P W M _ M S P I N I T _ C B _ I D                           =   0 x 0 6 U       / * ! <   T I M   P W M   M s p I n i t   C a l l b a c k   I D                                                               * /  
     ,   H A L _ T I M _ P W M _ M S P D E I N I T _ C B _ I D                       =   0 x 0 7 U       / * ! <   T I M   P W M   M s p D e I n i t   C a l l b a c k   I D                                                           * /  
     ,   H A L _ T I M _ O N E _ P U L S E _ M S P I N I T _ C B _ I D               =   0 x 0 8 U       / * ! <   T I M   O n e   P u l s e   M s p I n i t   C a l l b a c k   I D                                                   * /  
     ,   H A L _ T I M _ O N E _ P U L S E _ M S P D E I N I T _ C B _ I D           =   0 x 0 9 U       / * ! <   T I M   O n e   P u l s e   M s p D e I n i t   C a l l b a c k   I D                                               * /  
     ,   H A L _ T I M _ E N C O D E R _ M S P I N I T _ C B _ I D                   =   0 x 0 A U       / * ! <   T I M   E n c o d e r   M s p I n i t   C a l l b a c k   I D                                                       * /  
     ,   H A L _ T I M _ E N C O D E R _ M S P D E I N I T _ C B _ I D               =   0 x 0 B U       / * ! <   T I M   E n c o d e r   M s p D e I n i t   C a l l b a c k   I D                                                   * /  
     ,   H A L _ T I M _ H A L L _ S E N S O R _ M S P I N I T _ C B _ I D           =   0 x 0 C U       / * ! <   T I M   H a l l   S e n s o r   M s p D e I n i t   C a l l b a c k   I D                                           * /  
     ,   H A L _ T I M _ H A L L _ S E N S O R _ M S P D E I N I T _ C B _ I D       =   0 x 0 D U       / * ! <   T I M   H a l l   S e n s o r   M s p D e I n i t   C a l l b a c k   I D                                           * /  
     ,   H A L _ T I M _ P E R I O D _ E L A P S E D _ C B _ I D                     =   0 x 0 E U       / * ! <   T I M   P e r i o d   E l a p s e d   C a l l b a c k   I D                                                           * /  
     ,   H A L _ T I M _ P E R I O D _ E L A P S E D _ H A L F _ C B _ I D           =   0 x 0 F U       / * ! <   T I M   P e r i o d   E l a p s e d   h a l f   c o m p l e t e   C a l l b a c k   I D                               * /  
     ,   H A L _ T I M _ T R I G G E R _ C B _ I D                                   =   0 x 1 0 U       / * ! <   T I M   T r i g g e r   C a l l b a c k   I D                                                                         * /  
     ,   H A L _ T I M _ T R I G G E R _ H A L F _ C B _ I D                         =   0 x 1 1 U       / * ! <   T I M   T r i g g e r   h a l f   c o m p l e t e   C a l l b a c k   I D                                             * /  
  
     ,   H A L _ T I M _ I C _ C A P T U R E _ C B _ I D                             =   0 x 1 2 U       / * ! <   T I M   I n p u t   C a p t u r e   C a l l b a c k   I D                                                             * /  
     ,   H A L _ T I M _ I C _ C A P T U R E _ H A L F _ C B _ I D                   =   0 x 1 3 U       / * ! <   T I M   I n p u t   C a p t u r e   h a l f   c o m p l e t e   C a l l b a c k   I D                                 * /  
     ,   H A L _ T I M _ O C _ D E L A Y _ E L A P S E D _ C B _ I D                 =   0 x 1 4 U       / * ! <   T I M   O u t p u t   C o m p a r e   D e l a y   E l a p s e d   C a l l b a c k   I D                               * /  
     ,   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ C B _ I D             =   0 x 1 5 U       / * ! <   T I M   P W M   P u l s e   F i n i s h e d   C a l l b a c k   I D                       * /  
     ,   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ H A L F _ C B _ I D   =   0 x 1 6 U       / * ! <   T I M   P W M   P u l s e   F i n i s h e d   h a l f   c o m p l e t e   C a l l b a c k   I D                       * /  
     ,   H A L _ T I M _ E R R O R _ C B _ I D                                       =   0 x 1 7 U       / * ! <   T I M   E r r o r   C a l l b a c k   I D                                                                             * /  
     ,   H A L _ T I M _ C O M M U T A T I O N _ C B _ I D                           =   0 x 1 8 U       / * ! <   T I M   C o m m u t a t i o n   C a l l b a c k   I D                                                                 * /  
     ,   H A L _ T I M _ C O M M U T A T I O N _ H A L F _ C B _ I D                 =   0 x 1 9 U       / * ! <   T I M   C o m m u t a t i o n   h a l f   c o m p l e t e   C a l l b a c k   I D                                     * /  
     ,   H A L _ T I M _ B R E A K _ C B _ I D                                       =   0 x 1 A U       / * ! <   T I M   B r e a k   C a l l b a c k   I D                                                                             * /  
 }   H A L _ T I M _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   T I M   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f     v o i d   ( * p T I M _ C a l l b a c k T y p e D e f ) ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;     / * ! <   p o i n t e r   t o   t h e   T I M   c a l l b a c k   f u n c t i o n   * /  
  
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
 / *   E n d   o f   e x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ C o n s t a n t s   T I M   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C l e a r I n p u t _ S o u r c e   T I M   C l e a r   I n p u t   S o u r c e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C L E A R I N P U T S O U R C E _ N O N E                       0 x 0 0 0 0 0 0 0 0 U       / * ! <   O C R E F _ C L R   i s   d i s a b l e d   * /  
 # d e f i n e   T I M _ C L E A R I N P U T S O U R C E _ E T R                         0 x 0 0 0 0 0 0 0 1 U       / * ! <   O C R E F _ C L R   i s   c o n n e c t e d   t o   E T R F   i n p u t   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ D M A _ B a s e _ a d d r e s s   T I M   D M A   B a s e   A d d r e s s  
     *   @ {  
     * /  
 # d e f i n e   T I M _ D M A B A S E _ C R 1                                         0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   T I M _ D M A B A S E _ C R 2                                         0 x 0 0 0 0 0 0 0 1 U  
 # d e f i n e   T I M _ D M A B A S E _ S M C R                                       0 x 0 0 0 0 0 0 0 2 U  
 # d e f i n e   T I M _ D M A B A S E _ D I E R                                       0 x 0 0 0 0 0 0 0 3 U  
 # d e f i n e   T I M _ D M A B A S E _ S R                                           0 x 0 0 0 0 0 0 0 4 U  
 # d e f i n e   T I M _ D M A B A S E _ E G R                                         0 x 0 0 0 0 0 0 0 5 U  
 # d e f i n e   T I M _ D M A B A S E _ C C M R 1                                     0 x 0 0 0 0 0 0 0 6 U  
 # d e f i n e   T I M _ D M A B A S E _ C C M R 2                                     0 x 0 0 0 0 0 0 0 7 U  
 # d e f i n e   T I M _ D M A B A S E _ C C E R                                       0 x 0 0 0 0 0 0 0 8 U  
 # d e f i n e   T I M _ D M A B A S E _ C N T                                         0 x 0 0 0 0 0 0 0 9 U  
 # d e f i n e   T I M _ D M A B A S E _ P S C                                         0 x 0 0 0 0 0 0 0 A U  
 # d e f i n e   T I M _ D M A B A S E _ A R R                                         0 x 0 0 0 0 0 0 0 B U  
 # d e f i n e   T I M _ D M A B A S E _ R C R                                         0 x 0 0 0 0 0 0 0 C U  
 # d e f i n e   T I M _ D M A B A S E _ C C R 1                                       0 x 0 0 0 0 0 0 0 D U  
 # d e f i n e   T I M _ D M A B A S E _ C C R 2                                       0 x 0 0 0 0 0 0 0 E U  
 # d e f i n e   T I M _ D M A B A S E _ C C R 3                                       0 x 0 0 0 0 0 0 0 F U  
 # d e f i n e   T I M _ D M A B A S E _ C C R 4                                       0 x 0 0 0 0 0 0 1 0 U  
 # d e f i n e   T I M _ D M A B A S E _ B D T R                                       0 x 0 0 0 0 0 0 1 1 U  
 # d e f i n e   T I M _ D M A B A S E _ D C R                                         0 x 0 0 0 0 0 0 1 2 U  
 # d e f i n e   T I M _ D M A B A S E _ D M A R                                       0 x 0 0 0 0 0 0 1 3 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ E v e n t _ S o u r c e   T I M   E v e n t   S o u r c e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ E V E N T S O U R C E _ U P D A T E                             T I M _ E G R _ U G           / * ! <   R e i n i t i a l i z e   t h e   c o u n t e r   a n d   g e n e r a t e s   a n   u p d a t e   o f   t h e   r e g i s t e r s   * /  
 # d e f i n e   T I M _ E V E N T S O U R C E _ C C 1                                   T I M _ E G R _ C C 1 G       / * ! <   A   c a p t u r e / c o m p a r e   e v e n t   i s   g e n e r a t e d   o n   c h a n n e l   1   * /  
 # d e f i n e   T I M _ E V E N T S O U R C E _ C C 2                                   T I M _ E G R _ C C 2 G       / * ! <   A   c a p t u r e / c o m p a r e   e v e n t   i s   g e n e r a t e d   o n   c h a n n e l   2   * /  
 # d e f i n e   T I M _ E V E N T S O U R C E _ C C 3                                   T I M _ E G R _ C C 3 G       / * ! <   A   c a p t u r e / c o m p a r e   e v e n t   i s   g e n e r a t e d   o n   c h a n n e l   3   * /  
 # d e f i n e   T I M _ E V E N T S O U R C E _ C C 4                                   T I M _ E G R _ C C 4 G       / * ! <   A   c a p t u r e / c o m p a r e   e v e n t   i s   g e n e r a t e d   o n   c h a n n e l   4   * /  
 # d e f i n e   T I M _ E V E N T S O U R C E _ C O M                                   T I M _ E G R _ C O M G       / * ! <   A   c o m m u t a t i o n   e v e n t   i s   g e n e r a t e d   * /  
 # d e f i n e   T I M _ E V E N T S O U R C E _ T R I G G E R                           T I M _ E G R _ T G           / * ! <   A   t r i g g e r   e v e n t   i s   g e n e r a t e d   * /  
 # d e f i n e   T I M _ E V E N T S O U R C E _ B R E A K                               T I M _ E G R _ B G           / * ! <   A   b r e a k   e v e n t   i s   g e n e r a t e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ I n p u t _ C h a n n e l _ P o l a r i t y   T I M   I n p u t   C h a n n e l   p o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e     T I M _ I N P U T C H A N N E L P O L A R I T Y _ R I S I N G             0 x 0 0 0 0 0 0 0 0 U                                               / * ! <   P o l a r i t y   f o r   T I x   s o u r c e   * /  
 # d e f i n e     T I M _ I N P U T C H A N N E L P O L A R I T Y _ F A L L I N G           T I M _ C C E R _ C C 1 P                                           / * ! <   P o l a r i t y   f o r   T I x   s o u r c e   * /  
 # d e f i n e     T I M _ I N P U T C H A N N E L P O L A R I T Y _ B O T H E D G E         ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 1 N P )     / * ! <   P o l a r i t y   f o r   T I x   s o u r c e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ E T R _ P o l a r i t y   T I M   E T R   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   T I M _ E T R P O L A R I T Y _ I N V E R T E D                             T I M _ S M C R _ E T P                                             / * ! <   P o l a r i t y   f o r   E T R   s o u r c e   * /  
 # d e f i n e   T I M _ E T R P O L A R I T Y _ N O N I N V E R T E D                       0 x 0 0 0 0 0 0 0 0 U                                               / * ! <   P o l a r i t y   f o r   E T R   s o u r c e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ E T R _ P r e s c a l e r   T I M   E T R   P r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   T I M _ E T R P R E S C A L E R _ D I V 1                                   0 x 0 0 0 0 0 0 0 0 U                                               / * ! <   N o   p r e s c a l e r   i s   u s e d   * /  
 # d e f i n e   T I M _ E T R P R E S C A L E R _ D I V 2                                   T I M _ S M C R _ E T P S _ 0                                       / * ! <   E T R   i n p u t   s o u r c e   i s   d i v i d e d   b y   2   * /  
 # d e f i n e   T I M _ E T R P R E S C A L E R _ D I V 4                                   T I M _ S M C R _ E T P S _ 1                                       / * ! <   E T R   i n p u t   s o u r c e   i s   d i v i d e d   b y   4   * /  
 # d e f i n e   T I M _ E T R P R E S C A L E R _ D I V 8                                   T I M _ S M C R _ E T P S                                           / * ! <   E T R   i n p u t   s o u r c e   i s   d i v i d e d   b y   8   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C o u n t e r _ M o d e   T I M   C o u n t e r   M o d e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C O U N T E R M O D E _ U P                                   0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C o u n t e r   u s e d   a s   u p - c o u n t e r       * /  
 # d e f i n e   T I M _ C O U N T E R M O D E _ D O W N                               T I M _ C R 1 _ D I R                                                     / * ! <   C o u n t e r   u s e d   a s   d o w n - c o u n t e r   * /  
 # d e f i n e   T I M _ C O U N T E R M O D E _ C E N T E R A L I G N E D 1           T I M _ C R 1 _ C M S _ 0                                                 / * ! <   C e n t e r - a l i g n e d   m o d e   1                 * /  
 # d e f i n e   T I M _ C O U N T E R M O D E _ C E N T E R A L I G N E D 2           T I M _ C R 1 _ C M S _ 1                                                 / * ! <   C e n t e r - a l i g n e d   m o d e   2                 * /  
 # d e f i n e   T I M _ C O U N T E R M O D E _ C E N T E R A L I G N E D 3           T I M _ C R 1 _ C M S                                                     / * ! <   C e n t e r - a l i g n e d   m o d e   3                 * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C l o c k D i v i s i o n   T I M   C l o c k   D i v i s i o n  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C L O C K D I V I S I O N _ D I V 1                           0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C l o c k   d i v i s i o n :   t D T S = t C K _ I N T       * /  
 # d e f i n e   T I M _ C L O C K D I V I S I O N _ D I V 2                           T I M _ C R 1 _ C K D _ 0                                                 / * ! <   C l o c k   d i v i s i o n :   t D T S = 2 * t C K _ I N T   * /  
 # d e f i n e   T I M _ C L O C K D I V I S I O N _ D I V 4                           T I M _ C R 1 _ C K D _ 1                                                 / * ! <   C l o c k   d i v i s i o n :   t D T S = 4 * t C K _ I N T   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O u t p u t _ C o m p a r e _ S t a t e   T I M   O u t p u t   C o m p a r e   S t a t e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O U T P U T S T A T E _ D I S A B L E                         0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C a p t u r e / C o m p a r e   1   o u t p u t   d i s a b l e d   * /  
 # d e f i n e   T I M _ O U T P U T S T A T E _ E N A B L E                           T I M _ C C E R _ C C 1 E                                                 / * ! <   C a p t u r e / C o m p a r e   1   o u t p u t   e n a b l e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ A u t o R e l o a d P r e l o a d   T I M   A u t o - R e l o a d   P r e l o a d  
     *   @ {  
     * /  
 # d e f i n e   T I M _ A U T O R E L O A D _ P R E L O A D _ D I S A B L E                                 0 x 0 0 0 0 0 0 0 0 U                               / * ! <   T I M x _ A R R   r e g i s t e r   i s   n o t   b u f f e r e d   * /  
 # d e f i n e   T I M _ A U T O R E L O A D _ P R E L O A D _ E N A B L E                                   T I M _ C R 1 _ A R P E                             / * ! <   T I M x _ A R R   r e g i s t e r   i s   b u f f e r e d   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O u t p u t _ F a s t _ S t a t e   T I M   O u t p u t   F a s t   S t a t e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O C F A S T _ D I S A B L E                                   0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   O u t p u t   C o m p a r e   f a s t   d i s a b l e   * /  
 # d e f i n e   T I M _ O C F A S T _ E N A B L E                                     T I M _ C C M R 1 _ O C 1 F E                                             / * ! <   O u t p u t   C o m p a r e   f a s t   e n a b l e     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O u t p u t _ C o m p a r e _ N _ S t a t e   T I M   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   S t a t e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O U T P U T N S T A T E _ D I S A B L E                       0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   O C x N   i s   d i s a b l e d     * /  
 # d e f i n e   T I M _ O U T P U T N S T A T E _ E N A B L E                         T I M _ C C E R _ C C 1 N E                                               / * ! <   O C x N   i s   e n a b l e d       * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O u t p u t _ C o m p a r e _ P o l a r i t y   T I M   O u t p u t   C o m p a r e   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O C P O L A R I T Y _ H I G H                                 0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C a p t u r e / C o m p a r e   o u t p u t   p o l a r i t y     * /  
 # d e f i n e   T I M _ O C P O L A R I T Y _ L O W                                   T I M _ C C E R _ C C 1 P                                                 / * ! <   C a p t u r e / C o m p a r e   o u t p u t   p o l a r i t y     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O u t p u t _ C o m p a r e _ N _ P o l a r i t y   T I M   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O C N P O L A R I T Y _ H I G H                               0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C a p t u r e / C o m p a r e   c o m p l e m e n t a r y   o u t p u t   p o l a r i t y   * /  
 # d e f i n e   T I M _ O C N P O L A R I T Y _ L O W                                 T I M _ C C E R _ C C 1 N P                                               / * ! <   C a p t u r e / C o m p a r e   c o m p l e m e n t a r y   o u t p u t   p o l a r i t y   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O u t p u t _ C o m p a r e _ I d l e _ S t a t e   T I M   O u t p u t   C o m p a r e   I d l e   S t a t e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O C I D L E S T A T E _ S E T                                 T I M _ C R 2 _ O I S 1                                                   / * ! <   O u t p u t   I d l e   s t a t e :   O C x = 1   w h e n   M O E = 0   * /  
 # d e f i n e   T I M _ O C I D L E S T A T E _ R E S E T                             0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   O u t p u t   I d l e   s t a t e :   O C x = 0   w h e n   M O E = 0   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O u t p u t _ C o m p a r e _ N _ I d l e _ S t a t e   T I M   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   I d l e   S t a t e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O C N I D L E S T A T E _ S E T                               T I M _ C R 2 _ O I S 1 N                                                 / * ! <   C o m p l e m e n t a r y   o u t p u t   I d l e   s t a t e :   O C x N = 1   w h e n   M O E = 0   * /  
 # d e f i n e   T I M _ O C N I D L E S T A T E _ R E S E T                           0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C o m p l e m e n t a r y   o u t p u t   I d l e   s t a t e :   O C x N = 0   w h e n   M O E = 0   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ I n p u t _ C a p t u r e _ P o l a r i t y   T I M   I n p u t   C a p t u r e   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e     T I M _ I C P O L A R I T Y _ R I S I N G                           T I M _ I N P U T C H A N N E L P O L A R I T Y _ R I S I N G             / * ! <   C a p t u r e   t r i g g e r e d   b y   r i s i n g   e d g e   o n   t i m e r   i n p u t                                     * /  
 # d e f i n e     T I M _ I C P O L A R I T Y _ F A L L I N G                         T I M _ I N P U T C H A N N E L P O L A R I T Y _ F A L L I N G           / * ! <   C a p t u r e   t r i g g e r e d   b y   f a l l i n g   e d g e   o n   t i m e r   i n p u t                                   * /  
 # d e f i n e     T I M _ I C P O L A R I T Y _ B O T H E D G E                       T I M _ I N P U T C H A N N E L P O L A R I T Y _ B O T H E D G E         / * ! <   C a p t u r e   t r i g g e r e d   b y   b o t h   r i s i n g   a n d   f a l l i n g   e d g e s   o n   t i m e r   i n p u t * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ E n c o d e r _ I n p u t _ P o l a r i t y   T I M   E n c o d e r   I n p u t   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e     T I M _ E N C O D E R I N P U T P O L A R I T Y _ R I S I N G       T I M _ I N P U T C H A N N E L P O L A R I T Y _ R I S I N G             / * ! <   E n c o d e r   i n p u t   w i t h   r i s i n g   e d g e   p o l a r i t y     * /  
 # d e f i n e     T I M _ E N C O D E R I N P U T P O L A R I T Y _ F A L L I N G     T I M _ I N P U T C H A N N E L P O L A R I T Y _ F A L L I N G           / * ! <   E n c o d e r   i n p u t   w i t h   f a l l i n g   e d g e   p o l a r i t y   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ I n p u t _ C a p t u r e _ S e l e c t i o n   T I M   I n p u t   C a p t u r e   S e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   T I M _ I C S E L E C T I O N _ D I R E C T T I                       T I M _ C C M R 1 _ C C 1 S _ 0                                           / * ! <   T I M   I n p u t   1 ,   2 ,   3   o r   4   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 1 ,   I C 2 ,   I C 3   o r   I C 4 ,   r e s p e c t i v e l y   * /  
 # d e f i n e   T I M _ I C S E L E C T I O N _ I N D I R E C T T I                   T I M _ C C M R 1 _ C C 1 S _ 1                                           / * ! <   T I M   I n p u t   1 ,   2 ,   3   o r   4   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 2 ,   I C 1 ,   I C 4   o r   I C 3 ,   r e s p e c t i v e l y   * /  
 # d e f i n e   T I M _ I C S E L E C T I O N _ T R C                                 T I M _ C C M R 1 _ C C 1 S                                               / * ! <   T I M   I n p u t   1 ,   2 ,   3   o r   4   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   T R C   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ I n p u t _ C a p t u r e _ P r e s c a l e r   T I M   I n p u t   C a p t u r e   P r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   T I M _ I C P S C _ D I V 1                                           0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C a p t u r e   p e r f o r m e d   e a c h   t i m e   a n   e d g e   i s   d e t e c t e d   o n   t h e   c a p t u r e   i n p u t   * /  
 # d e f i n e   T I M _ I C P S C _ D I V 2                                           T I M _ C C M R 1 _ I C 1 P S C _ 0                                       / * ! <   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   2   e v e n t s                                                                 * /  
 # d e f i n e   T I M _ I C P S C _ D I V 4                                           T I M _ C C M R 1 _ I C 1 P S C _ 1                                       / * ! <   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   4   e v e n t s                                                                 * /  
 # d e f i n e   T I M _ I C P S C _ D I V 8                                           T I M _ C C M R 1 _ I C 1 P S C                                           / * ! <   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   8   e v e n t s                                                                 * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O n e _ P u l s e _ M o d e   T I M   O n e   P u l s e   M o d e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O P M O D E _ S I N G L E                                     T I M _ C R 1 _ O P M                                                     / * ! <   C o u n t e r   s t o p s   c o u n t i n g   a t   t h e   n e x t   u p d a t e   e v e n t   * /  
 # d e f i n e   T I M _ O P M O D E _ R E P E T I T I V E                             0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C o u n t e r   i s   n o t   s t o p p e d   a t   u p d a t e   e v e n t                     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ E n c o d e r _ M o d e   T I M   E n c o d e r   M o d e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ E N C O D E R M O D E _ T I 1                                             T I M _ S M C R _ S M S _ 0                                                                                                             / * ! <   Q u a d r a t u r e   e n c o d e r   m o d e   1 ,   x 2   m o d e ,   c o u n t s   u p / d o w n   o n   T I 1 F P 1   e d g e   d e p e n d i n g   o n   T I 2 F P 2   l e v e l     * /  
 # d e f i n e   T I M _ E N C O D E R M O D E _ T I 2                                             T I M _ S M C R _ S M S _ 1                                                                                                             / * ! <   Q u a d r a t u r e   e n c o d e r   m o d e   2 ,   x 2   m o d e ,   c o u n t s   u p / d o w n   o n   T I 2 F P 2   e d g e   d e p e n d i n g   o n   T I 1 F P 1   l e v e l .   * /  
 # d e f i n e   T I M _ E N C O D E R M O D E _ T I 1 2                                           ( T I M _ S M C R _ S M S _ 1   |   T I M _ S M C R _ S M S _ 0 )                                                                       / * ! <   Q u a d r a t u r e   e n c o d e r   m o d e   3 ,   x 4   m o d e ,   c o u n t s   u p / d o w n   o n   b o t h   T I 1 F P 1   a n d   T I 2 F P 2   e d g e s   d e p e n d i n g   o n   t h e   l e v e l   o f   t h e   o t h e r   i n p u t .   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ I n t e r r u p t _ d e f i n i t i o n   T I M   i n t e r r u p t   D e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   T I M _ I T _ U P D A T E                                             T I M _ D I E R _ U I E                                                   / * ! <   U p d a t e   i n t e r r u p t                         * /  
 # d e f i n e   T I M _ I T _ C C 1                                                   T I M _ D I E R _ C C 1 I E                                               / * ! <   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * /  
 # d e f i n e   T I M _ I T _ C C 2                                                   T I M _ D I E R _ C C 2 I E                                               / * ! <   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * /  
 # d e f i n e   T I M _ I T _ C C 3                                                   T I M _ D I E R _ C C 3 I E                                               / * ! <   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * /  
 # d e f i n e   T I M _ I T _ C C 4                                                   T I M _ D I E R _ C C 4 I E                                               / * ! <   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * /  
 # d e f i n e   T I M _ I T _ C O M                                                   T I M _ D I E R _ C O M I E                                               / * ! <   C o m m u t a t i o n   i n t e r r u p t               * /  
 # d e f i n e   T I M _ I T _ T R I G G E R                                           T I M _ D I E R _ T I E                                                   / * ! <   T r i g g e r   i n t e r r u p t                       * /  
 # d e f i n e   T I M _ I T _ B R E A K                                               T I M _ D I E R _ B I E                                                   / * ! <   B r e a k   i n t e r r u p t                           * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C o m m u t a t i o n _ S o u r c e     T I M   C o m m u t a t i o n   S o u r c e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C O M M U T A T I O N _ T R G I                             T I M _ C R 2 _ C C U S                                                     / * ! <   W h e n   C a p t u r e / c o m p a r e   c o n t r o l   b i t s   a r e   p r e l o a d e d ,   t h e y   a r e   u p d a t e d   b y   s e t t i n g   t h e   C O M G   b i t   o r   w h e n   a n   r i s i n g   e d g e   o c c u r s   o n   t r i g g e r   i n p u t   * /  
 # d e f i n e   T I M _ C O M M U T A T I O N _ S O F T W A R E                     0 x 0 0 0 0 0 0 0 0 U                                                       / * ! <   W h e n   C a p t u r e / c o m p a r e   c o n t r o l   b i t s   a r e   p r e l o a d e d ,   t h e y   a r e   u p d a t e d   b y   s e t t i n g   t h e   C O M G   b i t   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ D M A _ s o u r c e s   T I M   D M A   S o u r c e s  
     *   @ {  
     * /  
 # d e f i n e   T I M _ D M A _ U P D A T E                                           T I M _ D I E R _ U D E                                                   / * ! <   D M A   r e q u e s t   i s   t r i g g e r e d   b y   t h e   u p d a t e   e v e n t   * /  
 # d e f i n e   T I M _ D M A _ C C 1                                                 T I M _ D I E R _ C C 1 D E                                               / * ! <   D M A   r e q u e s t   i s   t r i g g e r e d   b y   t h e   c a p t u r e / c o m p a r e   m a c t h   1   e v e n t   * /  
 # d e f i n e   T I M _ D M A _ C C 2                                                 T I M _ D I E R _ C C 2 D E                                               / * ! <   D M A   r e q u e s t   i s   t r i g g e r e d   b y   t h e   c a p t u r e / c o m p a r e   m a c t h   2   e v e n t   e v e n t   * /  
 # d e f i n e   T I M _ D M A _ C C 3                                                 T I M _ D I E R _ C C 3 D E                                               / * ! <   D M A   r e q u e s t   i s   t r i g g e r e d   b y   t h e   c a p t u r e / c o m p a r e   m a c t h   3   e v e n t   e v e n t   * /  
 # d e f i n e   T I M _ D M A _ C C 4                                                 T I M _ D I E R _ C C 4 D E                                               / * ! <   D M A   r e q u e s t   i s   t r i g g e r e d   b y   t h e   c a p t u r e / c o m p a r e   m a c t h   4   e v e n t   e v e n t   * /  
 # d e f i n e   T I M _ D M A _ C O M                                                 T I M _ D I E R _ C O M D E                                               / * ! <   D M A   r e q u e s t   i s   t r i g g e r e d   b y   t h e   c o m m u t a t i o n   e v e n t   * /  
 # d e f i n e   T I M _ D M A _ T R I G G E R                                         T I M _ D I E R _ T D E                                                   / * ! <   D M A   r e q u e s t   i s   t r i g g e r e d   b y   t h e   t r i g g e r   e v e n t   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ F l a g _ d e f i n i t i o n   T I M   F l a g   D e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   T I M _ F L A G _ U P D A T E                                         T I M _ S R _ U I F                                                       / * ! <   U p d a t e   i n t e r r u p t   f l a g                   * /  
 # d e f i n e   T I M _ F L A G _ C C 1                                               T I M _ S R _ C C 1 I F                                                   / * ! <   C a p t u r e / C o m p a r e   1   i n t e r r u p t   f l a g   * /  
 # d e f i n e   T I M _ F L A G _ C C 2                                               T I M _ S R _ C C 2 I F                                                   / * ! <   C a p t u r e / C o m p a r e   2   i n t e r r u p t   f l a g   * /  
 # d e f i n e   T I M _ F L A G _ C C 3                                               T I M _ S R _ C C 3 I F                                                   / * ! <   C a p t u r e / C o m p a r e   3   i n t e r r u p t   f l a g   * /  
 # d e f i n e   T I M _ F L A G _ C C 4                                               T I M _ S R _ C C 4 I F                                                   / * ! <   C a p t u r e / C o m p a r e   4   i n t e r r u p t   f l a g   * /  
 # d e f i n e   T I M _ F L A G _ C O M                                               T I M _ S R _ C O M I F                                                   / * ! <   C o m m u t a t i o n   i n t e r r u p t   f l a g         * /  
 # d e f i n e   T I M _ F L A G _ T R I G G E R                                       T I M _ S R _ T I F                                                       / * ! <   T r i g g e r   i n t e r r u p t   f l a g                 * /  
 # d e f i n e   T I M _ F L A G _ B R E A K                                           T I M _ S R _ B I F                                                       / * ! <   B r e a k   i n t e r r u p t   f l a g                     * /  
 # d e f i n e   T I M _ F L A G _ C C 1 O F                                           T I M _ S R _ C C 1 O F                                                   / * ! <   C a p t u r e   1   o v e r c a p t u r e   f l a g         * /  
 # d e f i n e   T I M _ F L A G _ C C 2 O F                                           T I M _ S R _ C C 2 O F                                                   / * ! <   C a p t u r e   2   o v e r c a p t u r e   f l a g         * /  
 # d e f i n e   T I M _ F L A G _ C C 3 O F                                           T I M _ S R _ C C 3 O F                                                   / * ! <   C a p t u r e   3   o v e r c a p t u r e   f l a g         * /  
 # d e f i n e   T I M _ F L A G _ C C 4 O F                                           T I M _ S R _ C C 4 O F                                                   / * ! <   C a p t u r e   4   o v e r c a p t u r e   f l a g         * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C h a n n e l   T I M   C h a n n e l  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C H A N N E L _ 1                                             0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C a p t u r e / c o m p a r e   c h a n n e l   1   i d e n t i f i e r             * /  
 # d e f i n e   T I M _ C H A N N E L _ 2                                             0 x 0 0 0 0 0 0 0 4 U                                                     / * ! <   C a p t u r e / c o m p a r e   c h a n n e l   2   i d e n t i f i e r             * /  
 # d e f i n e   T I M _ C H A N N E L _ 3                                             0 x 0 0 0 0 0 0 0 8 U                                                     / * ! <   C a p t u r e / c o m p a r e   c h a n n e l   3   i d e n t i f i e r             * /  
 # d e f i n e   T I M _ C H A N N E L _ 4                                             0 x 0 0 0 0 0 0 0 C U                                                     / * ! <   C a p t u r e / c o m p a r e   c h a n n e l   4   i d e n t i f i e r             * /  
 # d e f i n e   T I M _ C H A N N E L _ A L L                                         0 x 0 0 0 0 0 0 3 C U                                                     / * ! <   G l o b a l   C a p t u r e / c o m p a r e   c h a n n e l   i d e n t i f i e r     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C l o c k _ S o u r c e   T I M   C l o c k   S o u r c e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ E T R M O D E 2         T I M _ S M C R _ E T P S _ 1             / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   2                                                     * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ I N T E R N A L         T I M _ S M C R _ E T P S _ 0             / * ! <   I n t e r n a l   c l o c k   s o u r c e                                                                   * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ I T R 0                 T I M _ T S _ I T R 0                     / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   1   ( I T R 0 )                                       * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ I T R 1                 T I M _ T S _ I T R 1                     / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   1   ( I T R 1 )                                       * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ I T R 2                 T I M _ T S _ I T R 2                     / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   1   ( I T R 2 )                                       * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ I T R 3                 T I M _ T S _ I T R 3                     / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   1   ( I T R 3 )                                       * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ T I 1 E D               T I M _ T S _ T I 1 F _ E D               / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   1   ( T T I 1 F P 1   +   e d g e   d e t e c t . )   * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ T I 1                   T I M _ T S _ T I 1 F P 1                 / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   1   ( T T I 1 F P 1 )                                 * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ T I 2                   T I M _ T S _ T I 2 F P 2                 / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   1   ( T T I 2 F P 2 )                                 * /  
 # d e f i n e   T I M _ C L O C K S O U R C E _ E T R M O D E 1         T I M _ T S _ E T R F                     / * ! <   E x t e r n a l   c l o c k   s o u r c e   m o d e   1   ( E T R F )                                       * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C l o c k _ P o l a r i t y   T I M   C l o c k   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C L O C K P O L A R I T Y _ I N V E R T E D                       T I M _ E T R P O L A R I T Y _ I N V E R T E D                       / * ! <   P o l a r i t y   f o r   E T R x   c l o c k   s o u r c e s   * /  
 # d e f i n e   T I M _ C L O C K P O L A R I T Y _ N O N I N V E R T E D                 T I M _ E T R P O L A R I T Y _ N O N I N V E R T E D                 / * ! <   P o l a r i t y   f o r   E T R x   c l o c k   s o u r c e s   * /  
 # d e f i n e   T I M _ C L O C K P O L A R I T Y _ R I S I N G                           T I M _ I N P U T C H A N N E L P O L A R I T Y _ R I S I N G         / * ! <   P o l a r i t y   f o r   T I x   c l o c k   s o u r c e s   * /  
 # d e f i n e   T I M _ C L O C K P O L A R I T Y _ F A L L I N G                         T I M _ I N P U T C H A N N E L P O L A R I T Y _ F A L L I N G       / * ! <   P o l a r i t y   f o r   T I x   c l o c k   s o u r c e s   * /  
 # d e f i n e   T I M _ C L O C K P O L A R I T Y _ B O T H E D G E                       T I M _ I N P U T C H A N N E L P O L A R I T Y _ B O T H E D G E     / * ! <   P o l a r i t y   f o r   T I x   c l o c k   s o u r c e s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C l o c k _ P r e s c a l e r   T I M   C l o c k   P r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C L O C K P R E S C A L E R _ D I V 1                                   T I M _ E T R P R E S C A L E R _ D I V 1                       / * ! <   N o   p r e s c a l e r   i s   u s e d                                                                                                           * /  
 # d e f i n e   T I M _ C L O C K P R E S C A L E R _ D I V 2                                   T I M _ E T R P R E S C A L E R _ D I V 2                       / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   C l o c k :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   2   e v e n t s .   * /  
 # d e f i n e   T I M _ C L O C K P R E S C A L E R _ D I V 4                                   T I M _ E T R P R E S C A L E R _ D I V 4                       / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   C l o c k :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   4   e v e n t s .   * /  
 # d e f i n e   T I M _ C L O C K P R E S C A L E R _ D I V 8                                   T I M _ E T R P R E S C A L E R _ D I V 8                       / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   C l o c k :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   8   e v e n t s .   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C l e a r I n p u t _ P o l a r i t y   T I M   C l e a r   I n p u t   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C L E A R I N P U T P O L A R I T Y _ I N V E R T E D                       T I M _ E T R P O L A R I T Y _ I N V E R T E D             / * ! <   P o l a r i t y   f o r   E T R x   p i n   * /  
 # d e f i n e   T I M _ C L E A R I N P U T P O L A R I T Y _ N O N I N V E R T E D                 T I M _ E T R P O L A R I T Y _ N O N I N V E R T E D       / * ! <   P o l a r i t y   f o r   E T R x   p i n   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ C l e a r I n p u t _ P r e s c a l e r   T I M   C l e a r   I n p u t   P r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 1                             T I M _ E T R P R E S C A L E R _ D I V 1                   / * ! <   N o   p r e s c a l e r   i s   u s e d                                                                                                       * /  
 # d e f i n e   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 2                             T I M _ E T R P R E S C A L E R _ D I V 2                   / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   p i n :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   2   e v e n t s .   * /  
 # d e f i n e   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 4                             T I M _ E T R P R E S C A L E R _ D I V 4                   / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   p i n :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   4   e v e n t s .   * /  
 # d e f i n e   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 8                             T I M _ E T R P R E S C A L E R _ D I V 8                   / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   p i n :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   8   e v e n t s .   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O S S R _ O f f _ S t a t e _ S e l e c t i o n _ f o r _ R u n _ m o d e _ s t a t e   T I M   O S S R   O f f S t a t e   S e l e c t i o n   f o r   R u n   m o d e   s t a t e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O S S R _ E N A B L E                                                     T I M _ B D T R _ O S S R                                     / * ! <   W h e n   i n a c t i v e ,   O C / O C N   o u t p u t s   a r e   e n a b l e d   ( s t i l l   c o n t r o l l e d   b y   t h e   t i m e r )                       * /  
 # d e f i n e   T I M _ O S S R _ D I S A B L E                                                   0 x 0 0 0 0 0 0 0 0 U                                         / * ! <   W h e n   i n a c t i v e ,   O C / O C N   o u t p u t s   a r e   d i s a b l e d   ( n o t   c o n t r o l l e d   a n y   l o n g e r   b y   t h e   t i m e r )   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O S S I _ O f f _ S t a t e _ S e l e c t i o n _ f o r _ I d l e _ m o d e _ s t a t e   T I M   O S S I   O f f S t a t e   S e l e c t i o n   f o r   I d l e   m o d e   s t a t e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O S S I _ E N A B L E                                                     T I M _ B D T R _ O S S I                                     / * ! <   W h e n   i n a c t i v e ,   O C / O C N   o u t p u t s   a r e   e n a b l e d   ( s t i l l   c o n t r o l l e d   b y   t h e   t i m e r )                       * /  
 # d e f i n e   T I M _ O S S I _ D I S A B L E                                                   0 x 0 0 0 0 0 0 0 0 U                                         / * ! <   W h e n   i n a c t i v e ,   O C / O C N   o u t p u t s   a r e   d i s a b l e d   ( n o t   c o n t r o l l e d   a n y   l o n g e r   b y   t h e   t i m e r )   * /  
 / * *  
     *   @ }  
     * /  
 / * *   @ d e f g r o u p   T I M _ L o c k _ l e v e l     T I M   L o c k   l e v e l  
     *   @ {  
     * /  
 # d e f i n e   T I M _ L O C K L E V E L _ O F F                                     0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   L O C K   O F F           * /  
 # d e f i n e   T I M _ L O C K L E V E L _ 1                                         T I M _ B D T R _ L O C K _ 0                                             / * ! <   L O C K   L e v e l   1   * /  
 # d e f i n e   T I M _ L O C K L E V E L _ 2                                         T I M _ B D T R _ L O C K _ 1                                             / * ! <   L O C K   L e v e l   2   * /  
 # d e f i n e   T I M _ L O C K L E V E L _ 3                                         T I M _ B D T R _ L O C K                                                 / * ! <   L O C K   L e v e l   3   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ B r e a k _ I n p u t _ e n a b l e _ d i s a b l e   T I M   B r e a k   I n p u t   E n a b l e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ B R E A K _ E N A B L E                                       T I M _ B D T R _ B K E                                                   / * ! <   B r e a k   i n p u t   B R K   i s   e n a b l e d     * /  
 # d e f i n e   T I M _ B R E A K _ D I S A B L E                                     0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   B r e a k   i n p u t   B R K   i s   d i s a b l e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ B r e a k _ P o l a r i t y   T I M   B r e a k   I n p u t   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   T I M _ B R E A K P O L A R I T Y _ L O W                             0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   B r e a k   i n p u t   B R K   i s   a c t i v e   l o w     * /  
 # d e f i n e   T I M _ B R E A K P O L A R I T Y _ H I G H                           T I M _ B D T R _ B K P                                                   / * ! <   B r e a k   i n p u t   B R K   i s   a c t i v e   h i g h   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ A O E _ B i t _ S e t _ R e s e t   T I M   A u t o m a t i c   O u t p u t   E n a b l e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ A U T O M A T I C O U T P U T _ D I S A B L E                 0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   M O E   c a n   b e   s e t   o n l y   b y   s o f t w a r e   * /  
 # d e f i n e   T I M _ A U T O M A T I C O U T P U T _ E N A B L E                   T I M _ B D T R _ A O E                                                   / * ! <   M O E   c a n   b e   s e t   b y   s o f t w a r e   o r   a u t o m a t i c a l l y   a t   t h e   n e x t   u p d a t e   e v e n t   ( i f   n o n e   o f   t h e   b r e a k   i n p u t s   B R K   a n d   B R K 2   i s   a c t i v e )   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ M a s t e r _ M o d e _ S e l e c t i o n   T I M   M a s t e r   M o d e   S e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   T I M _ T R G O _ R E S E T                         0 x 0 0 0 0 0 0 0 0 U                                                                             / * ! <   T I M x _ E G R . U G   b i t   i s   u s e d   a s   t r i g g e r   o u t p u t   ( T R G O )                             * /  
 # d e f i n e   T I M _ T R G O _ E N A B L E                       T I M _ C R 2 _ M M S _ 0                                                                         / * ! <   T I M x _ C R 1 . C E N   b i t   i s   u s e d   a s   t r i g g e r   o u t p u t   ( T R G O )                           * /  
 # d e f i n e   T I M _ T R G O _ U P D A T E                       T I M _ C R 2 _ M M S _ 1                                                                         / * ! <   U p d a t e   e v e n t   i s   u s e d   a s   t r i g g e r   o u t p u t   ( T R G O )                                   * /  
 # d e f i n e   T I M _ T R G O _ O C 1                             ( T I M _ C R 2 _ M M S _ 1   |   T I M _ C R 2 _ M M S _ 0 )                                     / * ! <   C a p t u r e   o r   a   c o m p a r e   m a t c h   1   i s   u s e d   a s   t r i g g e r   o u t p u t   ( T R G O )   * /  
 # d e f i n e   T I M _ T R G O _ O C 1 R E F                       T I M _ C R 2 _ M M S _ 2                                                                         / * ! <   O C 1 R E F   s i g n a l   i s   u s e d   a s   t r i g g e r   o u t p u t   ( T R G O )                                 * /  
 # d e f i n e   T I M _ T R G O _ O C 2 R E F                       ( T I M _ C R 2 _ M M S _ 2   |   T I M _ C R 2 _ M M S _ 0 )                                     / * ! <   O C 2 R E F   s i g n a l   i s   u s e d   a s   t r i g g e r   o u t p u t ( T R G O )                                   * /  
 # d e f i n e   T I M _ T R G O _ O C 3 R E F                       ( T I M _ C R 2 _ M M S _ 2   |   T I M _ C R 2 _ M M S _ 1 )                                     / * ! <   O C 3 R E F   s i g n a l   i s   u s e d   a s   t r i g g e r   o u t p u t ( T R G O )                                   * /  
 # d e f i n e   T I M _ T R G O _ O C 4 R E F                       ( T I M _ C R 2 _ M M S _ 2   |   T I M _ C R 2 _ M M S _ 1   |   T I M _ C R 2 _ M M S _ 0 )     / * ! <   O C 4 R E F   s i g n a l   i s   u s e d   a s   t r i g g e r   o u t p u t ( T R G O )                                   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ M a s t e r _ S l a v e _ M o d e   T I M   M a s t e r / S l a v e   M o d e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ M A S T E R S L A V E M O D E _ E N A B L E                   T I M _ S M C R _ M S M                                                   / * ! <   N o   a c t i o n   * /  
 # d e f i n e   T I M _ M A S T E R S L A V E M O D E _ D I S A B L E                 0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   M a s t e r / s l a v e   m o d e   i s   s e l e c t e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ S l a v e _ M o d e   T I M   S l a v e   m o d e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ S L A V E M O D E _ D I S A B L E                                 0 x 0 0 0 0 0 0 0 0 U                                                                                 / * ! <   S l a v e   m o d e   d i s a b l e d                       * /  
 # d e f i n e   T I M _ S L A V E M O D E _ R E S E T                                     T I M _ S M C R _ S M S _ 2                                                                           / * ! <   R e s e t   M o d e                                         * /  
 # d e f i n e   T I M _ S L A V E M O D E _ G A T E D                                     ( T I M _ S M C R _ S M S _ 2   |   T I M _ S M C R _ S M S _ 0 )                                     / * ! <   G a t e d   M o d e                                         * /  
 # d e f i n e   T I M _ S L A V E M O D E _ T R I G G E R                                 ( T I M _ S M C R _ S M S _ 2   |   T I M _ S M C R _ S M S _ 1 )                                     / * ! <   T r i g g e r   M o d e                                     * /  
 # d e f i n e   T I M _ S L A V E M O D E _ E X T E R N A L 1                             ( T I M _ S M C R _ S M S _ 2   |   T I M _ S M C R _ S M S _ 1   |   T I M _ S M C R _ S M S _ 0 )   / * ! <   E x t e r n a l   C l o c k   M o d e   1                   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ O u t p u t _ C o m p a r e _ a n d _ P W M _ m o d e s   T I M   O u t p u t   C o m p a r e   a n d   P W M   M o d e s  
     *   @ {  
     * /  
 # d e f i n e   T I M _ O C M O D E _ T I M I N G                                       0 x 0 0 0 0 0 0 0 0 U                                                                                             / * ! <   F r o z e n                                                                   * /  
 # d e f i n e   T I M _ O C M O D E _ A C T I V E                                       T I M _ C C M R 1 _ O C 1 M _ 0                                                                                   / * ! <   S e t   c h a n n e l   t o   a c t i v e   l e v e l   o n   m a t c h       * /  
 # d e f i n e   T I M _ O C M O D E _ I N A C T I V E                                   T I M _ C C M R 1 _ O C 1 M _ 1                                                                                   / * ! <   S e t   c h a n n e l   t o   i n a c t i v e   l e v e l   o n   m a t c h   * /  
 # d e f i n e   T I M _ O C M O D E _ T O G G L E                                       ( T I M _ C C M R 1 _ O C 1 M _ 1   |   T I M _ C C M R 1 _ O C 1 M _ 0 )                                         / * ! <   T o g g l e                                                                   * /  
 # d e f i n e   T I M _ O C M O D E _ P W M 1                                           ( T I M _ C C M R 1 _ O C 1 M _ 2   |   T I M _ C C M R 1 _ O C 1 M _ 1 )                                         / * ! <   P W M   m o d e   1                                                           * /  
 # d e f i n e   T I M _ O C M O D E _ P W M 2                                           ( T I M _ C C M R 1 _ O C 1 M _ 2   |   T I M _ C C M R 1 _ O C 1 M _ 1   |   T I M _ C C M R 1 _ O C 1 M _ 0 )   / * ! <   P W M   m o d e   2                                                           * /  
 # d e f i n e   T I M _ O C M O D E _ F O R C E D _ A C T I V E                         ( T I M _ C C M R 1 _ O C 1 M _ 2   |   T I M _ C C M R 1 _ O C 1 M _ 0 )                                         / * ! <   F o r c e   a c t i v e   l e v e l                                           * /  
 # d e f i n e   T I M _ O C M O D E _ F O R C E D _ I N A C T I V E                     T I M _ C C M R 1 _ O C 1 M _ 2                                                                                   / * ! <   F o r c e   i n a c t i v e   l e v e l                                       * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ T r i g g e r _ S e l e c t i o n   T I M   T r i g g e r   S e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   T I M _ T S _ I T R 0                     0 x 0 0 0 0 0 0 0 0 U                                                                                                               / * ! <   I n t e r n a l   T r i g g e r   0   ( I T R 0 )                             * /  
 # d e f i n e   T I M _ T S _ I T R 1                     T I M _ S M C R _ T S _ 0                                                                                                           / * ! <   I n t e r n a l   T r i g g e r   1   ( I T R 1 )                             * /  
 # d e f i n e   T I M _ T S _ I T R 2                     T I M _ S M C R _ T S _ 1                                                                                                           / * ! <   I n t e r n a l   T r i g g e r   2   ( I T R 2 )                             * /  
 # d e f i n e   T I M _ T S _ I T R 3                     ( T I M _ S M C R _ T S _ 0   |   T I M _ S M C R _ T S _ 1 )                                                                       / * ! <   I n t e r n a l   T r i g g e r   3   ( I T R 3 )                             * /  
 # d e f i n e   T I M _ T S _ T I 1 F _ E D               T I M _ S M C R _ T S _ 2                                                                                                           / * ! <   T I 1   E d g e   D e t e c t o r   ( T I 1 F _ E D )                         * /  
 # d e f i n e   T I M _ T S _ T I 1 F P 1                 ( T I M _ S M C R _ T S _ 0   |   T I M _ S M C R _ T S _ 2 )                                                                       / * ! <   F i l t e r e d   T i m e r   I n p u t   1   ( T I 1 F P 1 )                 * /  
 # d e f i n e   T I M _ T S _ T I 2 F P 2                 ( T I M _ S M C R _ T S _ 1   |   T I M _ S M C R _ T S _ 2 )                                                                       / * ! <   F i l t e r e d   T i m e r   I n p u t   2   ( T I 2 F P 2 )                 * /  
 # d e f i n e   T I M _ T S _ E T R F                     ( T I M _ S M C R _ T S _ 0   |   T I M _ S M C R _ T S _ 1   |   T I M _ S M C R _ T S _ 2 )                                       / * ! <   F i l t e r e d   E x t e r n a l   T r i g g e r   i n p u t   ( E T R F )   * /  
 # d e f i n e   T I M _ T S _ N O N E                     0 x 0 0 0 0 F F F F U                                                                                                               / * ! <   N o   t r i g g e r   s e l e c t e d                                         * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ T r i g g e r _ P o l a r i t y   T I M   T r i g g e r   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   T I M _ T R I G G E R P O L A R I T Y _ I N V E R T E D                       T I M _ E T R P O L A R I T Y _ I N V E R T E D                               / * ! <   P o l a r i t y   f o r   E T R x   t r i g g e r   s o u r c e s                           * /  
 # d e f i n e   T I M _ T R I G G E R P O L A R I T Y _ N O N I N V E R T E D                 T I M _ E T R P O L A R I T Y _ N O N I N V E R T E D                         / * ! <   P o l a r i t y   f o r   E T R x   t r i g g e r   s o u r c e s                           * /  
 # d e f i n e   T I M _ T R I G G E R P O L A R I T Y _ R I S I N G                           T I M _ I N P U T C H A N N E L P O L A R I T Y _ R I S I N G                 / * ! <   P o l a r i t y   f o r   T I x F P x   o r   T I 1 _ E D   t r i g g e r   s o u r c e s   * /  
 # d e f i n e   T I M _ T R I G G E R P O L A R I T Y _ F A L L I N G                         T I M _ I N P U T C H A N N E L P O L A R I T Y _ F A L L I N G               / * ! <   P o l a r i t y   f o r   T I x F P x   o r   T I 1 _ E D   t r i g g e r   s o u r c e s   * /  
 # d e f i n e   T I M _ T R I G G E R P O L A R I T Y _ B O T H E D G E                       T I M _ I N P U T C H A N N E L P O L A R I T Y _ B O T H E D G E             / * ! <   P o l a r i t y   f o r   T I x F P x   o r   T I 1 _ E D   t r i g g e r   s o u r c e s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ T r i g g e r _ P r e s c a l e r   T I M   T r i g g e r   P r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   T I M _ T R I G G E R P R E S C A L E R _ D I V 1                           T I M _ E T R P R E S C A L E R _ D I V 1                           / * ! <   N o   p r e s c a l e r   i s   u s e d                                                                                                               * /  
 # d e f i n e   T I M _ T R I G G E R P R E S C A L E R _ D I V 2                           T I M _ E T R P R E S C A L E R _ D I V 2                           / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   T r i g g e r :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   2   e v e n t s .   * /  
 # d e f i n e   T I M _ T R I G G E R P R E S C A L E R _ D I V 4                           T I M _ E T R P R E S C A L E R _ D I V 4                           / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   T r i g g e r :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   4   e v e n t s .   * /  
 # d e f i n e   T I M _ T R I G G E R P R E S C A L E R _ D I V 8                           T I M _ E T R P R E S C A L E R _ D I V 8                           / * ! <   P r e s c a l e r   f o r   E x t e r n a l   E T R   T r i g g e r :   C a p t u r e   p e r f o r m e d   o n c e   e v e r y   8   e v e n t s .   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ T I 1 _ S e l e c t i o n   T I M   T I 1   I n p u t   S e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   T I M _ T I 1 S E L E C T I O N _ C H 1                               0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   T h e   T I M x _ C H 1   p i n   i s   c o n n e c t e d   t o   T I 1   i n p u t   * /  
 # d e f i n e   T I M _ T I 1 S E L E C T I O N _ X O R C O M B I N A T I O N         T I M _ C R 2 _ T I 1 S                                                   / * ! <   T h e   T I M x _ C H 1 ,   C H 2   a n d   C H 3   p i n s   a r e   c o n n e c t e d   t o   t h e   T I 1   i n p u t   ( X O R   c o m b i n a t i o n )   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ D M A _ B u r s t _ L e n g t h   T I M   D M A   B u r s t   L e n g t h  
     *   @ {  
     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 T R A N S F E R               0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1   r e g i s t e r   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A       * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 2 T R A N S F E R S             0 x 0 0 0 0 0 1 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   2   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 3 T R A N S F E R S             0 x 0 0 0 0 0 2 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   3   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 4 T R A N S F E R S             0 x 0 0 0 0 0 3 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   4   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 5 T R A N S F E R S             0 x 0 0 0 0 0 4 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   5   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 6 T R A N S F E R S             0 x 0 0 0 0 0 5 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   6   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 7 T R A N S F E R S             0 x 0 0 0 0 0 6 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   7   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 8 T R A N S F E R S             0 x 0 0 0 0 0 7 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   8   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 9 T R A N S F E R S             0 x 0 0 0 0 0 8 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   9   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A     * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 0 T R A N S F E R S           0 x 0 0 0 0 0 9 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 0   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 1 T R A N S F E R S           0 x 0 0 0 0 0 A 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 1   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 2 T R A N S F E R S           0 x 0 0 0 0 0 B 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 2   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 3 T R A N S F E R S           0 x 0 0 0 0 0 C 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 3   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 4 T R A N S F E R S           0 x 0 0 0 0 0 D 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 4   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 5 T R A N S F E R S           0 x 0 0 0 0 0 E 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 5   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 6 T R A N S F E R S           0 x 0 0 0 0 0 F 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 6   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 7 T R A N S F E R S           0 x 0 0 0 0 1 0 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 7   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 # d e f i n e   T I M _ D M A B U R S T L E N G T H _ 1 8 T R A N S F E R S           0 x 0 0 0 0 1 1 0 0 U                                                     / * ! <   T h e   t r a n s f e r   i s   d o n e   t o   1 8   r e g i s t e r s   s t a r t i n g   f r o m   T I M x _ C R 1   +   T I M x _ D C R . D B A   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ H a n d l e _ i n d e x   T I M   D M A   H a n d l e   I n d e x  
     *   @ {  
     * /  
 # d e f i n e   T I M _ D M A _ I D _ U P D A T E                                 ( ( u i n t 1 6 _ t )   0 x 0 0 0 0 )               / * ! <   I n d e x   o f   t h e   D M A   h a n d l e   u s e d   f o r   U p d a t e   D M A   r e q u e s t s   * /  
 # d e f i n e   T I M _ D M A _ I D _ C C 1                                       ( ( u i n t 1 6 _ t )   0 x 0 0 0 1 )               / * ! <   I n d e x   o f   t h e   D M A   h a n d l e   u s e d   f o r   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t s   * /  
 # d e f i n e   T I M _ D M A _ I D _ C C 2                                       ( ( u i n t 1 6 _ t )   0 x 0 0 0 2 )               / * ! <   I n d e x   o f   t h e   D M A   h a n d l e   u s e d   f o r   C a p t u r e / C o m p a r e   2   D M A   r e q u e s t s   * /  
 # d e f i n e   T I M _ D M A _ I D _ C C 3                                       ( ( u i n t 1 6 _ t )   0 x 0 0 0 3 )               / * ! <   I n d e x   o f   t h e   D M A   h a n d l e   u s e d   f o r   C a p t u r e / C o m p a r e   3   D M A   r e q u e s t s   * /  
 # d e f i n e   T I M _ D M A _ I D _ C C 4                                       ( ( u i n t 1 6 _ t )   0 x 0 0 0 4 )               / * ! <   I n d e x   o f   t h e   D M A   h a n d l e   u s e d   f o r   C a p t u r e / C o m p a r e   4   D M A   r e q u e s t s   * /  
 # d e f i n e   T I M _ D M A _ I D _ C O M M U T A T I O N                       ( ( u i n t 1 6 _ t )   0 x 0 0 0 5 )               / * ! <   I n d e x   o f   t h e   D M A   h a n d l e   u s e d   f o r   C o m m u t a t i o n   D M A   r e q u e s t s   * /  
 # d e f i n e   T I M _ D M A _ I D _ T R I G G E R                               ( ( u i n t 1 6 _ t )   0 x 0 0 0 6 )               / * ! <   I n d e x   o f   t h e   D M A   h a n d l e   u s e d   f o r   T r i g g e r   D M A   r e q u e s t s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C h a n n e l _ C C _ S t a t e   T I M   C a p t u r e / C o m p a r e   C h a n n e l   S t a t e  
     *   @ {  
     * /  
 # d e f i n e   T I M _ C C x _ E N A B L E                                       0 x 0 0 0 0 0 0 0 1 U                                                         / * ! <   I n p u t   o r   o u t p u t   c h a n n e l   i s   e n a b l e d   * /  
 # d e f i n e   T I M _ C C x _ D I S A B L E                                     0 x 0 0 0 0 0 0 0 0 U                                                         / * ! <   I n p u t   o r   o u t p u t   c h a n n e l   i s   d i s a b l e d   * /  
 # d e f i n e   T I M _ C C x N _ E N A B L E                                     0 x 0 0 0 0 0 0 0 4 U                                                         / * ! <   C o m p l e m e n t a r y   o u t p u t   c h a n n e l   i s   e n a b l e d   * /  
 # d e f i n e   T I M _ C C x N _ D I S A B L E                                   0 x 0 0 0 0 0 0 0 0 U                                                         / * ! <   C o m p l e m e n t a r y   o u t p u t   c h a n n e l   i s   e n a b l e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
 / *   E n d   o f   e x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ M a c r o s   T I M   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f     R e s e t   T I M   h a n d l e   s t a t e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   _ _ H A L _ T I M _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   d o   {                                                                                                                               \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > S t a t e                         =   H A L _ T I M _ S T A T E _ R E S E T ;                   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 0 ]     =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 1 ]     =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 2 ]     =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 3 ]     =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 0 ]   =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 1 ]   =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 2 ]   =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 3 ]   =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > D M A B u r s t S t a t e         =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ;       \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > B a s e _ M s p I n i t C a l l b a c k                   =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > B a s e _ M s p D e I n i t C a l l b a c k               =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > I C _ M s p I n i t C a l l b a c k                       =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > I C _ M s p D e I n i t C a l l b a c k                   =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > O C _ M s p I n i t C a l l b a c k                       =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > O C _ M s p D e I n i t C a l l b a c k                   =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > P W M _ M s p I n i t C a l l b a c k                     =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > P W M _ M s p D e I n i t C a l l b a c k                 =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > O n e P u l s e _ M s p I n i t C a l l b a c k           =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > O n e P u l s e _ M s p D e I n i t C a l l b a c k       =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > E n c o d e r _ M s p I n i t C a l l b a c k             =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > E n c o d e r _ M s p D e I n i t C a l l b a c k         =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > H a l l S e n s o r _ M s p I n i t C a l l b a c k       =   N U L L ;                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > H a l l S e n s o r _ M s p D e I n i t C a l l b a c k   =   N U L L ;                         \  
                                                                                                           }   w h i l e ( 0 )  
 # e l s e  
 # d e f i n e   _ _ H A L _ T I M _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   d o   {                                                                                                                               \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > S t a t e                         =   H A L _ T I M _ S T A T E _ R E S E T ;                   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 0 ]     =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 1 ]     =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 2 ]     =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 3 ]     =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 0 ]   =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 1 ]   =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 2 ]   =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 3 ]   =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > D M A B u r s t S t a t e         =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ;       \  
                                                                                                           }   w h i l e ( 0 )  
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   T I M   p e r i p h e r a l .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ E N A B L E ( _ _ H A N D L E _ _ )                                   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1 | = ( T I M _ C R 1 _ C E N ) )  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   T I M   m a i n   O u t p u t .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ M O E _ E N A B L E ( _ _ H A N D L E _ _ )                           ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > B D T R | = ( T I M _ B D T R _ M O E ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   T I M   p e r i p h e r a l .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ D I S A B L E ( _ _ H A N D L E _ _ )   \  
     d o   {   \  
         i f   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   &   T I M _ C C E R _ C C x E _ M A S K )   = =   0 U L )   \  
         {   \  
             i f ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   &   T I M _ C C E R _ C C x N E _ M A S K )   = =   0 U L )   \  
             {   \  
                 ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   & =   ~ ( T I M _ C R 1 _ C E N ) ;   \  
             }   \  
         }   \  
     }   w h i l e ( 0 )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   T I M   m a i n   O u t p u t .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e  
     *   @ r e t v a l   N o n e  
     *   @ n o t e   T h e   M a i n   O u t p u t   E n a b l e   o f   a   t i m e r   i n s t a n c e   i s   d i s a b l e d   o n l y   i f   a l l   t h e   C C x   a n d   C C x N   c h a n n e l s   h a v e   b e e n  
     *               d i s a b l e d  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ M O E _ D I S A B L E ( _ _ H A N D L E _ _ )   \  
     d o   {   \  
         i f   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   &   T I M _ C C E R _ C C x E _ M A S K )   = =   0 U L )   \  
         {   \  
             i f ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   &   T I M _ C C E R _ C C x N E _ M A S K )   = =   0 U L )   \  
             {   \  
                 ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > B D T R   & =   ~ ( T I M _ B D T R _ M O E ) ;   \  
             }   \  
         }   \  
     }   w h i l e ( 0 )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   T I M   m a i n   O u t p u t .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e  
     *   @ r e t v a l   N o n e  
     *   @ n o t e   T h e   M a i n   O u t p u t   E n a b l e   o f   a   t i m e r   i n s t a n c e   i s   d i s a b l e d   u n c o n d i t i o n a l l y  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ M O E _ D I S A B L E _ U N C O N D I T I O N A L L Y ( _ _ H A N D L E _ _ )     ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > B D T R   & =   ~ ( T I M _ B D T R _ M O E )  
  
 / * *   @ b r i e f     E n a b l e   t h e   s p e c i f i e d   T I M   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   T I M   H a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   T I M   i n t e r r u p t   s o u r c e   t o   e n a b l e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ I T _ U P D A T E :   U p d a t e   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 1 :       C a p t u r e / C o m p a r e   1   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 2 :     C a p t u r e / C o m p a r e   2   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 3 :     C a p t u r e / C o m p a r e   3   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 4 :     C a p t u r e / C o m p a r e   4   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C O M :       C o m m u t a t i o n   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ T R I G G E R :   T r i g g e r   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ B R E A K :   B r e a k   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )         ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > D I E R   | =   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     D i s a b l e   t h e   s p e c i f i e d   T I M   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   T I M   H a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   T I M   i n t e r r u p t   s o u r c e   t o   d i s a b l e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ I T _ U P D A T E :   U p d a t e   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 1 :       C a p t u r e / C o m p a r e   1   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 2 :     C a p t u r e / C o m p a r e   2   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 3 :     C a p t u r e / C o m p a r e   3   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 4 :     C a p t u r e / C o m p a r e   4   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C O M :       C o m m u t a t i o n   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ T R I G G E R :   T r i g g e r   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ B R E A K :   B r e a k   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > D I E R   & =   ~ ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     E n a b l e   t h e   s p e c i f i e d   D M A   r e q u e s t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   T I M   H a n d l e .  
     *   @ p a r a m     _ _ D M A _ _   s p e c i f i e s   t h e   T I M   D M A   r e q u e s t   t o   e n a b l e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ D M A _ U P D A T E :   U p d a t e   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C C 1 :       C a p t u r e / C o m p a r e   1   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C C 2 :     C a p t u r e / C o m p a r e   2   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C C 3 :     C a p t u r e / C o m p a r e   3   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C C 4 :     C a p t u r e / C o m p a r e   4   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C O M :       C o m m u t a t i o n   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ T R I G G E R :   T r i g g e r   D M A   r e q u e s t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ E N A B L E _ D M A ( _ _ H A N D L E _ _ ,   _ _ D M A _ _ )                   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > D I E R   | =   ( _ _ D M A _ _ ) )  
  
 / * *   @ b r i e f     D i s a b l e   t h e   s p e c i f i e d   D M A   r e q u e s t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   T I M   H a n d l e .  
     *   @ p a r a m     _ _ D M A _ _   s p e c i f i e s   t h e   T I M   D M A   r e q u e s t   t o   d i s a b l e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ D M A _ U P D A T E :   U p d a t e   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C C 1 :       C a p t u r e / C o m p a r e   1   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C C 2 :     C a p t u r e / C o m p a r e   2   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C C 3 :     C a p t u r e / C o m p a r e   3   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C C 4 :     C a p t u r e / C o m p a r e   4   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ C O M :       C o m m u t a t i o n   D M A   r e q u e s t  
     *                         @ a r g   T I M _ D M A _ T R I G G E R :   T r i g g e r   D M A   r e q u e s t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ D I S A B L E _ D M A ( _ _ H A N D L E _ _ ,   _ _ D M A _ _ )                 ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > D I E R   & =   ~ ( _ _ D M A _ _ ) )  
  
 / * *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   T I M   i n t e r r u p t   f l a g   i s   s e t   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   T I M   H a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   T I M   i n t e r r u p t   f l a g   t o   c h e c k .  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ F L A G _ U P D A T E :   U p d a t e   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 1 :   C a p t u r e / C o m p a r e   1   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 2 :   C a p t u r e / C o m p a r e   2   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 3 :   C a p t u r e / C o m p a r e   3   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 4 :   C a p t u r e / C o m p a r e   4   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C O M :     C o m m u t a t i o n   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ T R I G G E R :   T r i g g e r   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ B R E A K :   B r e a k   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 1 O F :   C a p t u r e / C o m p a r e   1   o v e r c a p t u r e   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 2 O F :   C a p t u r e / C o m p a r e   2   o v e r c a p t u r e   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 3 O F :   C a p t u r e / C o m p a r e   3   o v e r c a p t u r e   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 4 O F :   C a p t u r e / C o m p a r e   4   o v e r c a p t u r e   f l a g  
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ F L A G _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                     ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   & ( _ _ F L A G _ _ ) )   = =   ( _ _ F L A G _ _ ) )  
  
 / * *   @ b r i e f     C l e a r   t h e   s p e c i f i e d   T I M   i n t e r r u p t   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   T I M   H a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   T I M   i n t e r r u p t   f l a g   t o   c l e a r .  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ F L A G _ U P D A T E :   U p d a t e   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 1 :   C a p t u r e / C o m p a r e   1   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 2 :   C a p t u r e / C o m p a r e   2   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 3 :   C a p t u r e / C o m p a r e   3   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 4 :   C a p t u r e / C o m p a r e   4   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C O M :     C o m m u t a t i o n   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ T R I G G E R :   T r i g g e r   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ B R E A K :   B r e a k   i n t e r r u p t   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 1 O F :   C a p t u r e / C o m p a r e   1   o v e r c a p t u r e   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 2 O F :   C a p t u r e / C o m p a r e   2   o v e r c a p t u r e   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 3 O F :   C a p t u r e / C o m p a r e   3   o v e r c a p t u r e   f l a g  
     *                         @ a r g   T I M _ F L A G _ C C 4 O F :   C a p t u r e / C o m p a r e   4   o v e r c a p t u r e   f l a g  
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ F L A G _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                 ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   =   ~ ( _ _ F L A G _ _ ) )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   T I M   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   T I M   i n t e r r u p t   s o u r c e   t o   c h e c k .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ I T _ U P D A T E :   U p d a t e   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 1 :       C a p t u r e / C o m p a r e   1   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 2 :     C a p t u r e / C o m p a r e   2   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 3 :     C a p t u r e / C o m p a r e   3   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 4 :     C a p t u r e / C o m p a r e   4   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C O M :       C o m m u t a t i o n   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ T R I G G E R :   T r i g g e r   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ B R E A K :   B r e a k   i n t e r r u p t  
     *   @ r e t v a l   T h e   s t a t e   o f   T I M _ I T   ( S E T   o r   R E S E T ) .  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > D I E R   &   ( _ _ I N T E R R U P T _ _ ) )   \  
                                                                                                                           = =   ( _ _ I N T E R R U P T _ _ ) )   ?   S E T   :   R E S E T )  
  
 / * *   @ b r i e f   C l e a r   t h e   T I M   i n t e r r u p t   p e n d i n g   b i t s .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   i n t e r r u p t   p e n d i n g   b i t   t o   c l e a r .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ I T _ U P D A T E :   U p d a t e   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 1 :       C a p t u r e / C o m p a r e   1   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 2 :     C a p t u r e / C o m p a r e   2   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 3 :     C a p t u r e / C o m p a r e   3   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C C 4 :     C a p t u r e / C o m p a r e   4   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ C O M :       C o m m u t a t i o n   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ T R I G G E R :   T r i g g e r   i n t e r r u p t  
     *                         @ a r g   T I M _ I T _ B R E A K :   B r e a k   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ C L E A R _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )             ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   =   ~ ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     I n d i c a t e s   w h e t h e r   o r   n o t   t h e   T I M   C o u n t e r   i s   u s e d   a s   d o w n c o u n t e r .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ r e t v a l   F a l s e   ( C o u n t e r   u s e d   a s   u p c o u n t e r )   o r   T r u e   ( C o u n t e r   u s e d   a s   d o w n c o u n t e r )  
     *   @ n o t e   T h i s   m a c r o   i s   p a r t i c u l a r l y   u s e f u l   t o   g e t   t h e   c o u n t i n g   m o d e   w h e n   t h e   t i m e r   o p e r a t e s   i n   C e n t e r - a l i g n e d   m o d e  
     *               o r   E n c o d e r   m o d e .  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ I S _ T I M _ C O U N T I N G _ D O W N ( _ _ H A N D L E _ _ )         ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   & ( T I M _ C R 1 _ D I R ) )   = =   ( T I M _ C R 1 _ D I R ) )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T I M   P r e s c a l e r   o n   r u n t i m e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ P R E S C _ _   s p e c i f i e s   t h e   P r e s c a l e r   n e w   v a l u e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ S E T _ P R E S C A L E R ( _ _ H A N D L E _ _ ,   _ _ P R E S C _ _ )               ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > P S C   =   ( _ _ P R E S C _ _ ) )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T I M   C o u n t e r   R e g i s t e r   v a l u e   o n   r u n t i m e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C O U N T E R _ _   s p e c i f i e s   t h e   C o u n t e r   r e g i s t e r   n e w   v a l u e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ S E T _ C O U N T E R ( _ _ H A N D L E _ _ ,   _ _ C O U N T E R _ _ )     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C N T   =   ( _ _ C O U N T E R _ _ ) )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   T I M   C o u n t e r   R e g i s t e r   v a l u e   o n   r u n t i m e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ r e t v a l   1 6 - b i t   o r   3 2 - b i t   v a l u e   o f   t h e   t i m e r   c o u n t e r   r e g i s t e r   ( T I M x _ C N T )  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ G E T _ C O U N T E R ( _ _ H A N D L E _ _ )     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C N T )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T I M   A u t o r e l o a d   R e g i s t e r   v a l u e   o n   r u n t i m e   w i t h o u t   c a l l i n g   a n o t h e r   t i m e   a n y   I n i t   f u n c t i o n .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ A U T O R E L O A D _ _   s p e c i f i e s   t h e   C o u n t e r   r e g i s t e r   n e w   v a l u e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ S E T _ A U T O R E L O A D ( _ _ H A N D L E _ _ ,   _ _ A U T O R E L O A D _ _ )   \  
     d o {                                                                                                         \  
         ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > A R R   =   ( _ _ A U T O R E L O A D _ _ ) ;     \  
         ( _ _ H A N D L E _ _ ) - > I n i t . P e r i o d   =   ( _ _ A U T O R E L O A D _ _ ) ;         \  
     }   w h i l e ( 0 )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   T I M   A u t o r e l o a d   R e g i s t e r   v a l u e   o n   r u n t i m e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ r e t v a l   1 6 - b i t   o r   3 2 - b i t   v a l u e   o f   t h e   t i m e r   a u t o - r e l o a d   r e g i s t e r ( T I M x _ A R R )  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ G E T _ A U T O R E L O A D ( _ _ H A N D L E _ _ )     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > A R R )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T I M   C l o c k   D i v i s i o n   v a l u e   o n   r u n t i m e   w i t h o u t   c a l l i n g   a n o t h e r   t i m e   a n y   I n i t   f u n c t i o n .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C K D _ _   s p e c i f i e s   t h e   c l o c k   d i v i s i o n   v a l u e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e :  
     *                         @ a r g   T I M _ C L O C K D I V I S I O N _ D I V 1 :   t D T S = t C K _ I N T  
     *                         @ a r g   T I M _ C L O C K D I V I S I O N _ D I V 2 :   t D T S = 2 * t C K _ I N T  
     *                         @ a r g   T I M _ C L O C K D I V I S I O N _ D I V 4 :   t D T S = 4 * t C K _ I N T  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ S E T _ C L O C K D I V I S I O N ( _ _ H A N D L E _ _ ,   _ _ C K D _ _ )   \  
     d o {                                                                                                       \  
         ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   & =   ( ~ T I M _ C R 1 _ C K D ) ;     \  
         ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   | =   ( _ _ C K D _ _ ) ;               \  
         ( _ _ H A N D L E _ _ ) - > I n i t . C l o c k D i v i s i o n   =   ( _ _ C K D _ _ ) ;       \  
     }   w h i l e ( 0 )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   T I M   C l o c k   D i v i s i o n   v a l u e   o n   r u n t i m e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ r e t v a l   T h e   c l o c k   d i v i s i o n   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C L O C K D I V I S I O N _ D I V 1 :   t D T S = t C K _ I N T  
     *                         @ a r g   T I M _ C L O C K D I V I S I O N _ D I V 2 :   t D T S = 2 * t C K _ I N T  
     *                         @ a r g   T I M _ C L O C K D I V I S I O N _ D I V 4 :   t D T S = 4 * t C K _ I N T  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ G E T _ C L O C K D I V I S I O N ( _ _ H A N D L E _ _ )     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   &   T I M _ C R 1 _ C K D )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T I M   I n p u t   C a p t u r e   p r e s c a l e r   o n   r u n t i m e   w i t h o u t   c a l l i n g   a n o t h e r   t i m e   H A L _ T I M _ I C _ C o n f i g C h a n n e l ( )  
     *                   f u n c t i o n .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d  
     *   @ p a r a m     _ _ I C P S C _ _   s p e c i f i e s   t h e   I n p u t   C a p t u r e 4   p r e s c a l e r   n e w   v a l u e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ I C P S C _ D I V 1 :   n o   p r e s c a l e r  
     *                         @ a r g   T I M _ I C P S C _ D I V 2 :   c a p t u r e   i s   d o n e   o n c e   e v e r y   2   e v e n t s  
     *                         @ a r g   T I M _ I C P S C _ D I V 4 :   c a p t u r e   i s   d o n e   o n c e   e v e r y   4   e v e n t s  
     *                         @ a r g   T I M _ I C P S C _ D I V 8 :   c a p t u r e   i s   d o n e   o n c e   e v e r y   8   e v e n t s  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ S E T _ I C P R E S C A L E R ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ,   _ _ I C P S C _ _ )   \  
     d o {                                                                                                         \  
         T I M _ R E S E T _ I C P R E S C A L E R V A L U E ( ( _ _ H A N D L E _ _ ) ,   ( _ _ C H A N N E L _ _ ) ) ;     \  
         T I M _ S E T _ I C P R E S C A L E R V A L U E ( ( _ _ H A N D L E _ _ ) ,   ( _ _ C H A N N E L _ _ ) ,   ( _ _ I C P S C _ _ ) ) ;   \  
     }   w h i l e ( 0 )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   T I M   I n p u t   C a p t u r e   p r e s c a l e r   o n   r u n t i m e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   g e t   i n p u t   c a p t u r e   1   p r e s c a l e r   v a l u e  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   g e t   i n p u t   c a p t u r e   2   p r e s c a l e r   v a l u e  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   g e t   i n p u t   c a p t u r e   3   p r e s c a l e r   v a l u e  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   g e t   i n p u t   c a p t u r e   4   p r e s c a l e r   v a l u e  
     *   @ r e t v a l   T h e   i n p u t   c a p t u r e   p r e s c a l e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ I C P S C _ D I V 1 :   n o   p r e s c a l e r  
     *                         @ a r g   T I M _ I C P S C _ D I V 2 :   c a p t u r e   i s   d o n e   o n c e   e v e r y   2   e v e n t s  
     *                         @ a r g   T I M _ I C P S C _ D I V 4 :   c a p t u r e   i s   d o n e   o n c e   e v e r y   4   e v e n t s  
     *                         @ a r g   T I M _ I C P S C _ D I V 8 :   c a p t u r e   i s   d o n e   o n c e   e v e r y   8   e v e n t s  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ G E T _ I C P R E S C A L E R ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ )     \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   &   T I M _ C C M R 1 _ I C 1 P S C )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   &   T I M _ C C M R 1 _ I C 2 P S C )   > >   8 U )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   &   T I M _ C C M R 2 _ I C 3 P S C )   : \  
       ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   &   T I M _ C C M R 2 _ I C 4 P S C ) )   > >   8 U )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T I M   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   o n   r u n t i m e   w i t h o u t   c a l l i n g   a n o t h e r   t i m e   C o n f i g C h a n n e l   f u n c t i o n .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d  
     *   @ p a r a m     _ _ C O M P A R E _ _   s p e c i f i e s   t h e   C a p t u r e   C o m p a r e   r e g i s t e r   n e w   v a l u e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ S E T _ C O M P A R E ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ,   _ _ C O M P A R E _ _ )   \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R 1   =   ( _ _ C O M P A R E _ _ ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R 2   =   ( _ _ C O M P A R E _ _ ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R 3   =   ( _ _ C O M P A R E _ _ ) )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R 4   =   ( _ _ C O M P A R E _ _ ) ) )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   T I M   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   o n   r u n t i m e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l   a s s o c i a t e d   w i t h   t h e   c a p t u r e   c o m p a r e   r e g i s t e r  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   g e t   c a p t u r e / c o m p a r e   1   r e g i s t e r   v a l u e  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   g e t   c a p t u r e / c o m p a r e   2   r e g i s t e r   v a l u e  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   g e t   c a p t u r e / c o m p a r e   3   r e g i s t e r   v a l u e  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   g e t   c a p t u r e / c o m p a r e   4   r e g i s t e r   v a l u e  
     *   @ r e t v a l   1 6 - b i t   o r   3 2 - b i t   v a l u e   o f   t h e   c a p t u r e / c o m p a r e   r e g i s t e r   ( T I M x _ C C R y )  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ G E T _ C O M P A R E ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ )   \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R 1 )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R 2 )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R 3 )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R 4 ) )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T I M   O u t p u t   c o m p a r e   p r e l o a d .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ E N A B L E _ O C x P R E L O A D ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ )         \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   | =   T I M _ C C M R 1 _ O C 1 P E )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   | =   T I M _ C C M R 1 _ O C 2 P E )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   | =   T I M _ C C M R 2 _ O C 3 P E )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   | =   T I M _ C C M R 2 _ O C 4 P E ) )  
  
 / * *  
     *   @ b r i e f     R e s e t   t h e   T I M   O u t p u t   c o m p a r e   p r e l o a d .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ D I S A B L E _ O C x P R E L O A D ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ )         \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ O C 1 P E )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ O C 2 P E )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ O C 3 P E )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ O C 4 P E ) )  
  
 / * *  
     *   @ b r i e f     E n a b l e   f a s t   m o d e   f o r   a   g i v e n   c h a n n e l .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d  
     *   @ n o t e     W h e n   f a s t   m o d e   i s   e n a b l e d   a n   a c t i v e   e d g e   o n   t h e   t r i g g e r   i n p u t   a c t s  
     *                 l i k e   a   c o m p a r e   m a t c h   o n   C C x   o u t p u t .   D e l a y   t o   s a m p l e   t h e   t r i g g e r  
     *                 i n p u t   a n d   t o   a c t i v a t e   C C x   o u t p u t   i s   r e d u c e d   t o   3   c l o c k   c y c l e s .  
     *   @ n o t e     F a s t   m o d e   a c t s   o n l y   i f   t h e   c h a n n e l   i s   c o n f i g u r e d   i n   P W M 1   o r   P W M 2   m o d e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ E N A B L E _ O C x F A S T ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ )         \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   | =   T I M _ C C M R 1 _ O C 1 F E )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   | =   T I M _ C C M R 1 _ O C 2 F E )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   | =   T I M _ C C M R 2 _ O C 3 F E )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   | =   T I M _ C C M R 2 _ O C 4 F E ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   f a s t   m o d e   f o r   a   g i v e n   c h a n n e l .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d  
     *   @ n o t e     W h e n   f a s t   m o d e   i s   d i s a b l e d   C C x   o u t p u t   b e h a v e s   n o r m a l l y   d e p e n d i n g  
     *                 o n   c o u n t e r   a n d   C C R x   v a l u e s   e v e n   w h e n   t h e   t r i g g e r   i s   O N .   T h e   m i n i m u m  
     *                 d e l a y   t o   a c t i v a t e   C C x   o u t p u t   w h e n   a n   a c t i v e   e d g e   o c c u r s   o n   t h e  
     *                 t r i g g e r   i n p u t   i s   5   c l o c k   c y c l e s .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ D I S A B L E _ O C x F A S T ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ )         \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ O C 1 F E )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ O C 2 F E )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ O C 3 F E )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ O C 4 F E ) )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   U p d a t e   R e q u e s t   S o u r c e   ( U R S )   b i t   o f   t h e   T I M x _ C R 1   r e g i s t e r .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ n o t e     W h e n   t h e   U R S   b i t   o f   t h e   T I M x _ C R 1   r e g i s t e r   i s   s e t ,   o n l y   c o u n t e r  
     *                 o v e r f l o w / u n d e r f l o w   g e n e r a t e s   a n   u p d a t e   i n t e r r u p t   o r   D M A   r e q u e s t   ( i f  
     *                 e n a b l e d )  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ U R S _ E N A B L E ( _ _ H A N D L E _ _ )     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1 | =   T I M _ C R 1 _ U R S )  
  
 / * *  
     *   @ b r i e f     R e s e t   t h e   U p d a t e   R e q u e s t   S o u r c e   ( U R S )   b i t   o f   t h e   T I M x _ C R 1   r e g i s t e r .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ n o t e     W h e n   t h e   U R S   b i t   o f   t h e   T I M x _ C R 1   r e g i s t e r   i s   r e s e t ,   a n y   o f   t h e  
     *                 f o l l o w i n g   e v e n t s   g e n e r a t e   a n   u p d a t e   i n t e r r u p t   o r   D M A   r e q u e s t   ( i f  
     *                 e n a b l e d ) :  
     *                       _   C o u n t e r   o v e r f l o w   u n d e r f l o w  
     *                       _   S e t t i n g   t h e   U G   b i t  
     *                       _   U p d a t e   g e n e r a t i o n   t h r o u g h   t h e   s l a v e   m o d e   c o n t r o l l e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ U R S _ D I S A B L E ( _ _ H A N D L E _ _ )     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1 & = ~ T I M _ C R 1 _ U R S )  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T I M   C a p t u r e   x   i n p u t   p o l a r i t y   o n   r u n t i m e .  
     *   @ p a r a m     _ _ H A N D L E _ _   T I M   h a n d l e .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d  
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d  
     *   @ p a r a m     _ _ P O L A R I T Y _ _   P o l a r i t y   f o r   T I x   s o u r c e  
     *                         @ a r g   T I M _ I N P U T C H A N N E L P O L A R I T Y _ R I S I N G :   R i s i n g   E d g e  
     *                         @ a r g   T I M _ I N P U T C H A N N E L P O L A R I T Y _ F A L L I N G :   F a l l i n g   E d g e  
     *                         @ a r g   T I M _ I N P U T C H A N N E L P O L A R I T Y _ B O T H E D G E :   R i s i n g   a n d   F a l l i n g   E d g e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ T I M _ S E T _ C A P T U R E P O L A R I T Y ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ,   _ _ P O L A R I T Y _ _ )         \  
     d o {                                                                                                                                           \  
         T I M _ R E S E T _ C A P T U R E P O L A R I T Y ( ( _ _ H A N D L E _ _ ) ,   ( _ _ C H A N N E L _ _ ) ) ;                               \  
         T I M _ S E T _ C A P T U R E P O L A R I T Y ( ( _ _ H A N D L E _ _ ) ,   ( _ _ C H A N N E L _ _ ) ,   ( _ _ P O L A R I T Y _ _ ) ) ;   \  
     } w h i l e ( 0 )  
  
 / * *  
     *   @ }  
     * /  
 / *   E n d   o f   e x p o r t e d   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   T I M _ P r i v a t e _ C o n s t a n t s   T I M   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 / *   T h e   c o u n t e r   o f   a   t i m e r   i n s t a n c e   i s   d i s a b l e d   o n l y   i f   a l l   t h e   C C x   a n d   C C x N  
       c h a n n e l s   h a v e   b e e n   d i s a b l e d   * /  
 # d e f i n e   T I M _ C C E R _ C C x E _ M A S K     ( ( u i n t 3 2 _ t ) ( T I M _ C C E R _ C C 1 E   |   T I M _ C C E R _ C C 2 E   |   T I M _ C C E R _ C C 3 E   |   T I M _ C C E R _ C C 4 E ) )  
 # d e f i n e   T I M _ C C E R _ C C x N E _ M A S K   ( ( u i n t 3 2 _ t ) ( T I M _ C C E R _ C C 1 N E   |   T I M _ C C E R _ C C 2 N E   |   T I M _ C C E R _ C C 3 N E ) )  
 / * *  
     *   @ }  
     * /  
 / *   E n d   o f   p r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   T I M _ P r i v a t e _ M a c r o s   T I M   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ T I M _ C L E A R I N P U T _ S O U R C E ( _ _ M O D E _ _ )     ( ( ( _ _ M O D E _ _ )   = =   T I M _ C L E A R I N P U T S O U R C E _ N O N E )             | |   \  
                                                                                           ( ( _ _ M O D E _ _ )   = =   T I M _ C L E A R I N P U T S O U R C E _ E T R ) )  
  
 # d e f i n e   I S _ T I M _ D M A _ B A S E ( _ _ B A S E _ _ )   ( ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C R 1 )       | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C R 2 )       | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ S M C R )     | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ D I E R )     | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ S R )         | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ E G R )       | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C C M R 1 )   | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C C M R 2 )   | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C C E R )     | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C N T )       | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ P S C )       | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ A R R )       | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ R C R )       | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C C R 1 )     | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C C R 2 )     | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C C R 3 )     | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ C C R 4 )     | |   \  
                                                                       ( ( _ _ B A S E _ _ )   = =   T I M _ D M A B A S E _ B D T R ) )  
  
 # d e f i n e   I S _ T I M _ E V E N T _ S O U R C E ( _ _ S O U R C E _ _ )   ( ( ( ( _ _ S O U R C E _ _ )   &   0 x F F F F F F 0 0 U )   = =   0 x 0 0 0 0 0 0 0 0 U )   & &   ( ( _ _ S O U R C E _ _ )   ! =   0 x 0 0 0 0 0 0 0 0 U ) )  
  
 # d e f i n e   I S _ T I M _ C O U N T E R _ M O D E ( _ _ M O D E _ _ )             ( ( ( _ _ M O D E _ _ )   = =   T I M _ C O U N T E R M O D E _ U P )                             | |   \  
                                                                                         ( ( _ _ M O D E _ _ )   = =   T I M _ C O U N T E R M O D E _ D O W N )                         | |   \  
                                                                                         ( ( _ _ M O D E _ _ )   = =   T I M _ C O U N T E R M O D E _ C E N T E R A L I G N E D 1 )     | |   \  
                                                                                         ( ( _ _ M O D E _ _ )   = =   T I M _ C O U N T E R M O D E _ C E N T E R A L I G N E D 2 )     | |   \  
                                                                                         ( ( _ _ M O D E _ _ )   = =   T I M _ C O U N T E R M O D E _ C E N T E R A L I G N E D 3 ) )  
  
 # d e f i n e   I S _ T I M _ C L O C K D I V I S I O N _ D I V ( _ _ D I V _ _ )     ( ( ( _ _ D I V _ _ )   = =   T I M _ C L O C K D I V I S I O N _ D I V 1 )   | |   \  
                                                                                         ( ( _ _ D I V _ _ )   = =   T I M _ C L O C K D I V I S I O N _ D I V 2 )   | |   \  
                                                                                         ( ( _ _ D I V _ _ )   = =   T I M _ C L O C K D I V I S I O N _ D I V 4 ) )  
  
 # d e f i n e   I S _ T I M _ A U T O R E L O A D _ P R E L O A D ( P R E L O A D )   ( ( ( P R E L O A D )   = =   T I M _ A U T O R E L O A D _ P R E L O A D _ D I S A B L E )   | |   \  
                                                                                         ( ( P R E L O A D )   = =   T I M _ A U T O R E L O A D _ P R E L O A D _ E N A B L E ) )  
  
 # d e f i n e   I S _ T I M _ F A S T _ S T A T E ( _ _ S T A T E _ _ )               ( ( ( _ _ S T A T E _ _ )   = =   T I M _ O C F A S T _ D I S A B L E )   | |   \  
                                                                                         ( ( _ _ S T A T E _ _ )   = =   T I M _ O C F A S T _ E N A B L E ) )  
  
 # d e f i n e   I S _ T I M _ O C _ P O L A R I T Y ( _ _ P O L A R I T Y _ _ )       ( ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ O C P O L A R I T Y _ H I G H )   | |   \  
                                                                                         ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ O C P O L A R I T Y _ L O W ) )  
  
 # d e f i n e   I S _ T I M _ O C N _ P O L A R I T Y ( _ _ P O L A R I T Y _ _ )     ( ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ O C N P O L A R I T Y _ H I G H )   | |   \  
                                                                                         ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ O C N P O L A R I T Y _ L O W ) )  
  
 # d e f i n e   I S _ T I M _ O C I D L E _ S T A T E ( _ _ S T A T E _ _ )           ( ( ( _ _ S T A T E _ _ )   = =   T I M _ O C I D L E S T A T E _ S E T )   | |   \  
                                                                                         ( ( _ _ S T A T E _ _ )   = =   T I M _ O C I D L E S T A T E _ R E S E T ) )  
  
 # d e f i n e   I S _ T I M _ O C N I D L E _ S T A T E ( _ _ S T A T E _ _ )         ( ( ( _ _ S T A T E _ _ )   = =   T I M _ O C N I D L E S T A T E _ S E T )   | |   \  
                                                                                         ( ( _ _ S T A T E _ _ )   = =   T I M _ O C N I D L E S T A T E _ R E S E T ) )  
  
 # d e f i n e   I S _ T I M _ E N C O D E R I N P U T _ P O L A R I T Y ( _ _ P O L A R I T Y _ _ )       ( ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ E N C O D E R I N P U T P O L A R I T Y _ R I S I N G )       | |   \  
                                                                                                             ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ E N C O D E R I N P U T P O L A R I T Y _ F A L L I N G ) )  
  
 # d e f i n e   I S _ T I M _ I C _ P O L A R I T Y ( _ _ P O L A R I T Y _ _ )       ( ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ I C P O L A R I T Y _ R I S I N G )       | |   \  
                                                                                         ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ I C P O L A R I T Y _ F A L L I N G )     | |   \  
                                                                                         ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ I C P O L A R I T Y _ B O T H E D G E ) )  
  
 # d e f i n e   I S _ T I M _ I C _ S E L E C T I O N ( _ _ S E L E C T I O N _ _ )   ( ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ I C S E L E C T I O N _ D I R E C T T I )   | |   \  
                                                                                         ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ I C S E L E C T I O N _ I N D I R E C T T I )   | |   \  
                                                                                         ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ I C S E L E C T I O N _ T R C ) )  
  
 # d e f i n e   I S _ T I M _ I C _ P R E S C A L E R ( _ _ P R E S C A L E R _ _ )   ( ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ I C P S C _ D I V 1 )   | |   \  
                                                                                         ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ I C P S C _ D I V 2 )   | |   \  
                                                                                         ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ I C P S C _ D I V 4 )   | |   \  
                                                                                         ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ I C P S C _ D I V 8 ) )  
  
 # d e f i n e   I S _ T I M _ O P M _ M O D E ( _ _ M O D E _ _ )                     ( ( ( _ _ M O D E _ _ )   = =   T I M _ O P M O D E _ S I N G L E )   | |   \  
                                                                                         ( ( _ _ M O D E _ _ )   = =   T I M _ O P M O D E _ R E P E T I T I V E ) )  
  
 # d e f i n e   I S _ T I M _ E N C O D E R _ M O D E ( _ _ M O D E _ _ )             ( ( ( _ _ M O D E _ _ )   = =   T I M _ E N C O D E R M O D E _ T I 1 )   | |   \  
                                                                                         ( ( _ _ M O D E _ _ )   = =   T I M _ E N C O D E R M O D E _ T I 2 )   | |   \  
                                                                                         ( ( _ _ M O D E _ _ )   = =   T I M _ E N C O D E R M O D E _ T I 1 2 ) )  
  
 # d e f i n e   I S _ T I M _ D M A _ S O U R C E ( _ _ S O U R C E _ _ )   ( ( ( ( _ _ S O U R C E _ _ )   &   0 x F F F F 8 0 F F U )   = =   0 x 0 0 0 0 0 0 0 0 U )   & &   ( ( _ _ S O U R C E _ _ )   ! =   0 x 0 0 0 0 0 0 0 0 U ) )  
  
 # d e f i n e   I S _ T I M _ C H A N N E L S ( _ _ C H A N N E L _ _ )               ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   | |   \  
                                                                                         ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   | |   \  
                                                                                         ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   | |   \  
                                                                                         ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 4 )   | |   \  
                                                                                         ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ A L L ) )  
  
 # d e f i n e   I S _ T I M _ O P M _ C H A N N E L S ( _ _ C H A N N E L _ _ )       ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   | |   \  
                                                                                         ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 ) )  
  
 # d e f i n e   I S _ T I M _ C O M P L E M E N T A R Y _ C H A N N E L S ( _ _ C H A N N E L _ _ )   ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   | |   \  
                                                                                                         ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   | |   \  
                                                                                                         ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 ) )  
  
 # d e f i n e   I S _ T I M _ C L O C K S O U R C E ( _ _ C L O C K _ _ )   ( ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ I N T E R N A L )   | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ E T R M O D E 2 )   | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ I T R 0 )           | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ I T R 1 )           | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ I T R 2 )           | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ I T R 3 )           | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ T I 1 E D )         | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ T I 1 )             | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ T I 2 )             | |   \  
                                                                               ( ( _ _ C L O C K _ _ )   = =   T I M _ C L O C K S O U R C E _ E T R M O D E 1 ) )  
  
 # d e f i n e   I S _ T I M _ C L O C K P O L A R I T Y ( _ _ P O L A R I T Y _ _ )   ( ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ C L O C K P O L A R I T Y _ I N V E R T E D )         | |   \  
                                                                                         ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ C L O C K P O L A R I T Y _ N O N I N V E R T E D )   | |   \  
                                                                                         ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ C L O C K P O L A R I T Y _ R I S I N G )             | |   \  
                                                                                         ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ C L O C K P O L A R I T Y _ F A L L I N G )           | |   \  
                                                                                         ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ C L O C K P O L A R I T Y _ B O T H E D G E ) )  
  
 # d e f i n e   I S _ T I M _ C L O C K P R E S C A L E R ( _ _ P R E S C A L E R _ _ )   ( ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ C L O C K P R E S C A L E R _ D I V 1 )   | |   \  
                                                                                             ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ C L O C K P R E S C A L E R _ D I V 2 )   | |   \  
                                                                                             ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ C L O C K P R E S C A L E R _ D I V 4 )   | |   \  
                                                                                             ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ C L O C K P R E S C A L E R _ D I V 8 ) )  
  
 # d e f i n e   I S _ T I M _ C L O C K F I L T E R ( _ _ I C F I L T E R _ _ )             ( ( _ _ I C F I L T E R _ _ )   < =   0 x F U )  
  
 # d e f i n e   I S _ T I M _ C L E A R I N P U T _ P O L A R I T Y ( _ _ P O L A R I T Y _ _ )   ( ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ C L E A R I N P U T P O L A R I T Y _ I N V E R T E D )   | |   \  
                                                                                                     ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ C L E A R I N P U T P O L A R I T Y _ N O N I N V E R T E D ) )  
  
 # d e f i n e   I S _ T I M _ C L E A R I N P U T _ P R E S C A L E R ( _ _ P R E S C A L E R _ _ )   ( ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 1 )   | |   \  
                                                                                                         ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 2 )   | |   \  
                                                                                                         ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 4 )   | |   \  
                                                                                                         ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 8 ) )  
  
 # d e f i n e   I S _ T I M _ C L E A R I N P U T _ F I L T E R ( _ _ I C F I L T E R _ _ )   ( ( _ _ I C F I L T E R _ _ )   < =   0 x F U )  
  
 # d e f i n e   I S _ T I M _ O S S R _ S T A T E ( _ _ S T A T E _ _ )               ( ( ( _ _ S T A T E _ _ )   = =   T I M _ O S S R _ E N A B L E )   | |   \  
                                                                                         ( ( _ _ S T A T E _ _ )   = =   T I M _ O S S R _ D I S A B L E ) )  
  
 # d e f i n e   I S _ T I M _ O S S I _ S T A T E ( _ _ S T A T E _ _ )               ( ( ( _ _ S T A T E _ _ )   = =   T I M _ O S S I _ E N A B L E )   | |   \  
                                                                                         ( ( _ _ S T A T E _ _ )   = =   T I M _ O S S I _ D I S A B L E ) )  
  
 # d e f i n e   I S _ T I M _ L O C K _ L E V E L ( _ _ L E V E L _ _ )               ( ( ( _ _ L E V E L _ _ )   = =   T I M _ L O C K L E V E L _ O F F )   | |   \  
                                                                                         ( ( _ _ L E V E L _ _ )   = =   T I M _ L O C K L E V E L _ 1 )       | |   \  
                                                                                         ( ( _ _ L E V E L _ _ )   = =   T I M _ L O C K L E V E L _ 2 )       | |   \  
                                                                                         ( ( _ _ L E V E L _ _ )   = =   T I M _ L O C K L E V E L _ 3 ) )  
  
 # d e f i n e   I S _ T I M _ B R E A K _ F I L T E R ( _ _ B R K F I L T E R _ _ )   ( ( _ _ B R K F I L T E R _ _ )   < =   0 x F U L )  
  
  
 # d e f i n e   I S _ T I M _ B R E A K _ S T A T E ( _ _ S T A T E _ _ )             ( ( ( _ _ S T A T E _ _ )   = =   T I M _ B R E A K _ E N A B L E )   | |   \  
                                                                                         ( ( _ _ S T A T E _ _ )   = =   T I M _ B R E A K _ D I S A B L E ) )  
  
 # d e f i n e   I S _ T I M _ B R E A K _ P O L A R I T Y ( _ _ P O L A R I T Y _ _ )   ( ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ B R E A K P O L A R I T Y _ L O W )   | |   \  
                                                                                           ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ B R E A K P O L A R I T Y _ H I G H ) )  
  
 # d e f i n e   I S _ T I M _ A U T O M A T I C _ O U T P U T _ S T A T E ( _ _ S T A T E _ _ )   ( ( ( _ _ S T A T E _ _ )   = =   T I M _ A U T O M A T I C O U T P U T _ E N A B L E )   | |   \  
                                                                                                     ( ( _ _ S T A T E _ _ )   = =   T I M _ A U T O M A T I C O U T P U T _ D I S A B L E ) )  
  
 # d e f i n e   I S _ T I M _ T R G O _ S O U R C E ( _ _ S O U R C E _ _ )   ( ( ( _ _ S O U R C E _ _ )   = =   T I M _ T R G O _ R E S E T )     | |   \  
                                                                                 ( ( _ _ S O U R C E _ _ )   = =   T I M _ T R G O _ E N A B L E )   | |   \  
                                                                                 ( ( _ _ S O U R C E _ _ )   = =   T I M _ T R G O _ U P D A T E )   | |   \  
                                                                                 ( ( _ _ S O U R C E _ _ )   = =   T I M _ T R G O _ O C 1 )         | |   \  
                                                                                 ( ( _ _ S O U R C E _ _ )   = =   T I M _ T R G O _ O C 1 R E F )   | |   \  
                                                                                 ( ( _ _ S O U R C E _ _ )   = =   T I M _ T R G O _ O C 2 R E F )   | |   \  
                                                                                 ( ( _ _ S O U R C E _ _ )   = =   T I M _ T R G O _ O C 3 R E F )   | |   \  
                                                                                 ( ( _ _ S O U R C E _ _ )   = =   T I M _ T R G O _ O C 4 R E F ) )  
  
 # d e f i n e   I S _ T I M _ M S M _ S T A T E ( _ _ S T A T E _ _ )             ( ( ( _ _ S T A T E _ _ )   = =   T I M _ M A S T E R S L A V E M O D E _ E N A B L E )   | |   \  
                                                                                     ( ( _ _ S T A T E _ _ )   = =   T I M _ M A S T E R S L A V E M O D E _ D I S A B L E ) )  
  
 # d e f i n e   I S _ T I M _ S L A V E _ M O D E ( _ _ M O D E _ _ )   ( ( ( _ _ M O D E _ _ )   = =   T I M _ S L A V E M O D E _ D I S A B L E )       | |   \  
                                                                           ( ( _ _ M O D E _ _ )   = =   T I M _ S L A V E M O D E _ R E S E T )           | |   \  
                                                                           ( ( _ _ M O D E _ _ )   = =   T I M _ S L A V E M O D E _ G A T E D )           | |   \  
                                                                           ( ( _ _ M O D E _ _ )   = =   T I M _ S L A V E M O D E _ T R I G G E R )       | |   \  
                                                                           ( ( _ _ M O D E _ _ )   = =   T I M _ S L A V E M O D E _ E X T E R N A L 1 ) )  
  
 # d e f i n e   I S _ T I M _ P W M _ M O D E ( _ _ M O D E _ _ )   ( ( ( _ _ M O D E _ _ )   = =   T I M _ O C M O D E _ P W M 1 )                               | |   \  
                                                                       ( ( _ _ M O D E _ _ )   = =   T I M _ O C M O D E _ P W M 2 ) )  
  
 # d e f i n e   I S _ T I M _ O C _ M O D E ( _ _ M O D E _ _ )     ( ( ( _ _ M O D E _ _ )   = =   T I M _ O C M O D E _ T I M I N G )                           | |   \  
                                                                       ( ( _ _ M O D E _ _ )   = =   T I M _ O C M O D E _ A C T I V E )                           | |   \  
                                                                       ( ( _ _ M O D E _ _ )   = =   T I M _ O C M O D E _ I N A C T I V E )                       | |   \  
                                                                       ( ( _ _ M O D E _ _ )   = =   T I M _ O C M O D E _ T O G G L E )                           | |   \  
                                                                       ( ( _ _ M O D E _ _ )   = =   T I M _ O C M O D E _ F O R C E D _ A C T I V E )             | |   \  
                                                                       ( ( _ _ M O D E _ _ )   = =   T I M _ O C M O D E _ F O R C E D _ I N A C T I V E ) )  
  
 # d e f i n e   I S _ T I M _ T R I G G E R _ S E L E C T I O N ( _ _ S E L E C T I O N _ _ )   ( ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ I T R 0 )   | |   \  
                                                                                                   ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ I T R 1 )   | |   \  
                                                                                                   ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ I T R 2 )   | |   \  
                                                                                                   ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ I T R 3 )   | |   \  
                                                                                                   ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ T I 1 F _ E D )   | |   \  
                                                                                                   ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ T I 1 F P 1 )   | |   \  
                                                                                                   ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ T I 2 F P 2 )   | |   \  
                                                                                                   ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ E T R F ) )  
  
 # d e f i n e   I S _ T I M _ I N T E R N A L _ T R I G G E R E V E N T _ S E L E C T I O N ( _ _ S E L E C T I O N _ _ )   ( ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ I T R 0 )   | |   \  
                                                                                                                               ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ I T R 1 )   | |   \  
                                                                                                                               ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ I T R 2 )   | |   \  
                                                                                                                               ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ I T R 3 )   | |   \  
                                                                                                                               ( ( _ _ S E L E C T I O N _ _ )   = =   T I M _ T S _ N O N E ) )  
  
 # d e f i n e   I S _ T I M _ T R I G G E R P O L A R I T Y ( _ _ P O L A R I T Y _ _ )       ( ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ T R I G G E R P O L A R I T Y _ I N V E R T E D       )   | |   \  
                                                                                                 ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ T R I G G E R P O L A R I T Y _ N O N I N V E R T E D )   | |   \  
                                                                                                 ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ T R I G G E R P O L A R I T Y _ R I S I N G           )   | |   \  
                                                                                                 ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ T R I G G E R P O L A R I T Y _ F A L L I N G         )   | |   \  
                                                                                                 ( ( _ _ P O L A R I T Y _ _ )   = =   T I M _ T R I G G E R P O L A R I T Y _ B O T H E D G E       ) )  
  
 # d e f i n e   I S _ T I M _ T R I G G E R P R E S C A L E R ( _ _ P R E S C A L E R _ _ )   ( ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ T R I G G E R P R E S C A L E R _ D I V 1 )   | |   \  
                                                                                                 ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ T R I G G E R P R E S C A L E R _ D I V 2 )   | |   \  
                                                                                                 ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ T R I G G E R P R E S C A L E R _ D I V 4 )   | |   \  
                                                                                                 ( ( _ _ P R E S C A L E R _ _ )   = =   T I M _ T R I G G E R P R E S C A L E R _ D I V 8 ) )  
  
 # d e f i n e   I S _ T I M _ T R I G G E R F I L T E R ( _ _ I C F I L T E R _ _ )   ( ( _ _ I C F I L T E R _ _ )   < =   0 x F U )  
  
 # d e f i n e   I S _ T I M _ T I 1 S E L E C T I O N ( _ _ T I 1 S E L E C T I O N _ _ )     ( ( ( _ _ T I 1 S E L E C T I O N _ _ )   = =   T I M _ T I 1 S E L E C T I O N _ C H 1 )   | |   \  
                                                                                                 ( ( _ _ T I 1 S E L E C T I O N _ _ )   = =   T I M _ T I 1 S E L E C T I O N _ X O R C O M B I N A T I O N ) )  
  
 # d e f i n e   I S _ T I M _ D M A _ L E N G T H ( _ _ L E N G T H _ _ )             ( ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 T R A N S F E R )       | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 2 T R A N S F E R S )     | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 3 T R A N S F E R S )     | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 4 T R A N S F E R S )     | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 5 T R A N S F E R S )     | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 6 T R A N S F E R S )     | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 7 T R A N S F E R S )     | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 8 T R A N S F E R S )     | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 9 T R A N S F E R S )     | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 0 T R A N S F E R S )   | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 1 T R A N S F E R S )   | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 2 T R A N S F E R S )   | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 3 T R A N S F E R S )   | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 4 T R A N S F E R S )   | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 5 T R A N S F E R S )   | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 6 T R A N S F E R S )   | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 7 T R A N S F E R S )   | |   \  
                                                                                         ( ( _ _ L E N G T H _ _ )   = =   T I M _ D M A B U R S T L E N G T H _ 1 8 T R A N S F E R S ) )  
  
 # d e f i n e   I S _ T I M _ D M A _ D A T A _ L E N G T H ( L E N G T H )   ( ( ( L E N G T H )   > =   0 x 1 U )   & &   ( ( L E N G T H )   <   0 x 1 0 0 0 0 U ) )  
  
 # d e f i n e   I S _ T I M _ I C _ F I L T E R ( _ _ I C F I L T E R _ _ )       ( ( _ _ I C F I L T E R _ _ )   < =   0 x F U )  
  
 # d e f i n e   I S _ T I M _ D E A D T I M E ( _ _ D E A D T I M E _ _ )         ( ( _ _ D E A D T I M E _ _ )   < =   0 x F F U )  
  
 # d e f i n e   I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( _ _ T R I G G E R _ _ )   ( ( _ _ T R I G G E R _ _ )   = =   T I M _ S L A V E M O D E _ T R I G G E R )  
  
 # d e f i n e   T I M _ S E T _ I C P R E S C A L E R V A L U E ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ,   _ _ I C P S C _ _ )   \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   | =   ( _ _ I C P S C _ _ ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   | =   ( ( _ _ I C P S C _ _ )   < <   8 U ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   | =   ( _ _ I C P S C _ _ ) )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   | =   ( ( _ _ I C P S C _ _ )   < <   8 U ) ) )  
  
 # d e f i n e   T I M _ R E S E T _ I C P R E S C A L E R V A L U E ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ )   \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ I C 1 P S C )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ I C 2 P S C )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ I C 3 P S C )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ I C 4 P S C ) )  
  
 # d e f i n e   T I M _ S E T _ C A P T U R E P O L A R I T Y ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ,   _ _ P O L A R I T Y _ _ )   \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   | =   ( _ _ P O L A R I T Y _ _ ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   | =   ( ( _ _ P O L A R I T Y _ _ )   < <   4 U ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   | =   ( ( _ _ P O L A R I T Y _ _ )   < <   8 U ) )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   | =   ( ( ( _ _ P O L A R I T Y _ _ )   < <   1 2 U ) ) ) )  
  
 # d e f i n e   T I M _ R E S E T _ C A P T U R E P O L A R I T Y ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ )   \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   & =   ~ ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 1 N P ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   & =   ~ ( T I M _ C C E R _ C C 2 P   |   T I M _ C C E R _ C C 2 N P ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   & =   ~ ( T I M _ C C E R _ C C 3 P ) )   : \  
       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C E R   & =   ~ ( T I M _ C C E R _ C C 4 P ) ) )  
  
 # d e f i n e   T I M _ C H A N N E L _ S T A T E _ G E T ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ) \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 0 ]   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 1 ]   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 2 ]   : \  
       ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 3 ] )  
  
 # d e f i n e   T I M _ C H A N N E L _ S T A T E _ S E T ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ,   _ _ C H A N N E L _ S T A T E _ _ )   \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 0 ]   =   ( _ _ C H A N N E L _ S T A T E _ _ ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 1 ]   =   ( _ _ C H A N N E L _ S T A T E _ _ ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 2 ]   =   ( _ _ C H A N N E L _ S T A T E _ _ ) )   : \  
       ( ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 3 ]   =   ( _ _ C H A N N E L _ S T A T E _ _ ) ) )  
  
 # d e f i n e   T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( _ _ H A N D L E _ _ ,     _ _ C H A N N E L _ S T A T E _ _ )   d o   {   \  
     ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 0 ]     =   ( _ _ C H A N N E L _ S T A T E _ _ ) ;     \  
     ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 1 ]     =   ( _ _ C H A N N E L _ S T A T E _ _ ) ;     \  
     ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 2 ]     =   ( _ _ C H A N N E L _ S T A T E _ _ ) ;     \  
     ( _ _ H A N D L E _ _ ) - > C h a n n e l S t a t e [ 3 ]     =   ( _ _ C H A N N E L _ S T A T E _ _ ) ;     \  
   }   w h i l e ( 0 )  
  
 # d e f i n e   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ) \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 0 ]   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 1 ]   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 2 ]   : \  
       ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 3 ] )  
  
 # d e f i n e   T I M _ C H A N N E L _ N _ S T A T E _ S E T ( _ _ H A N D L E _ _ ,   _ _ C H A N N E L _ _ ,   _ _ C H A N N E L _ S T A T E _ _ )   \  
     ( ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 1 )   ?   ( ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 0 ]   =   ( _ _ C H A N N E L _ S T A T E _ _ ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 2 )   ?   ( ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 1 ]   =   ( _ _ C H A N N E L _ S T A T E _ _ ) )   : \  
       ( ( _ _ C H A N N E L _ _ )   = =   T I M _ C H A N N E L _ 3 )   ?   ( ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 2 ]   =   ( _ _ C H A N N E L _ S T A T E _ _ ) )   : \  
       ( ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 3 ]   =   ( _ _ C H A N N E L _ S T A T E _ _ ) ) )  
  
 # d e f i n e   T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( _ _ H A N D L E _ _ ,     _ _ C H A N N E L _ S T A T E _ _ )   d o   {   \  
     ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 0 ]   =   \  
     ( _ _ C H A N N E L _ S T A T E _ _ ) ;     \  
     ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 1 ]   =   \  
     ( _ _ C H A N N E L _ S T A T E _ _ ) ;     \  
     ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 2 ]   =   \  
     ( _ _ C H A N N E L _ S T A T E _ _ ) ;     \  
     ( _ _ H A N D L E _ _ ) - > C h a n n e l N S t a t e [ 3 ]   =   \  
     ( _ _ C H A N N E L _ S T A T E _ _ ) ;     \  
   }   w h i l e ( 0 )  
  
 / * *  
     *   @ }  
     * /  
 / *   E n d   o f   p r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   I n c l u d e   T I M   H A L   E x t e n d e d   m o d u l e   * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ t i m _ e x . h "  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s   T I M   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   T I M   T i m e   B a s e   f u n c t i o n s  
     *     @ b r i e f       T i m e   B a s e   f u n c t i o n s  
     *   @ {  
     * /  
 / *   T i m e   B a s e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ B a s e _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ B a s e _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / *   B l o c k i n g   m o d e :   P o l l i n g   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / *   N o n - B l o c k i n g   m o d e :   D M A   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   T I M   O u t p u t   C o m p a r e   f u n c t i o n s  
     *     @ b r i e f       T I M   O u t p u t   C o m p a r e   f u n c t i o n s  
     *   @ {  
     * /  
 / *   T i m e r   O u t p u t   C o m p a r e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ O C _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ O C _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / *   B l o c k i n g   m o d e :   P o l l i n g   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   D M A   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   T I M   P W M   f u n c t i o n s  
     *     @ b r i e f       T I M   P W M   f u n c t i o n s  
     *   @ {  
     * /  
 / *   T i m e r   P W M   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ P W M _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ P W M _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / *   B l o c k i n g   m o d e :   P o l l i n g   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   D M A   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   T I M   I n p u t   C a p t u r e   f u n c t i o n s  
     *     @ b r i e f       T I M   I n p u t   C a p t u r e   f u n c t i o n s  
     *   @ {  
     * /  
 / *   T i m e r   I n p u t   C a p t u r e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ I C _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ I C _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / *   B l o c k i n g   m o d e :   P o l l i n g   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   D M A   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 5   T I M   O n e   P u l s e   f u n c t i o n s  
     *     @ b r i e f       T I M   O n e   P u l s e   f u n c t i o n s  
     *   @ {  
     * /  
 / *   T i m e r   O n e   P u l s e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O n e P u l s e M o d e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ O n e P u l s e _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ O n e P u l s e _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / *   B l o c k i n g   m o d e :   P o l l i n g   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 6   T I M   E n c o d e r   f u n c t i o n s  
     *     @ b r i e f       T I M   E n c o d e r   f u n c t i o n s  
     *   @ {  
     * /  
 / *   T i m e r   E n c o d e r   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ,     T I M _ E n c o d e r _ I n i t T y p e D e f   * s C o n f i g ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ E n c o d e r _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ E n c o d e r _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / *   B l o c k i n g   m o d e :   P o l l i n g   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / *   N o n - B l o c k i n g   m o d e :   D M A   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a 1 ,  
                                                                                         u i n t 3 2 _ t   * p D a t a 2 ,   u i n t 1 6 _ t   L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 7   T I M   I R Q   h a n d l e r   m a n a g e m e n t  
     *     @ b r i e f       I R Q   h a n d l e r   m a n a g e m e n t  
     *   @ {  
     * /  
 / *   I n t e r r u p t   H a n d l e r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 v o i d   H A L _ T I M _ I R Q H a n d l e r ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 8   T I M   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *   @ {  
     * /  
 / *   C o n t r o l   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ C o n f i g C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ O C _ I n i t T y p e D e f   * s C o n f i g ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ C o n f i g C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ O C _ I n i t T y p e D e f   * s C o n f i g ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ C o n f i g C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ I C _ I n i t T y p e D e f   * s C o n f i g ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ O n e P u l s e _ I n i t T y p e D e f   * s C o n f i g ,  
                                                                                                   u i n t 3 2 _ t   O u t p u t C h a n n e l ,     u i n t 3 2 _ t   I n p u t C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ C o n f i g O C r e f C l e a r ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ C l e a r I n p u t C o n f i g T y p e D e f   * s C l e a r I n p u t C o n f i g ,  
                                                                                       u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ C o n f i g C l o c k S o u r c e ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ C l o c k C o n f i g T y p e D e f   * s C l o c k S o u r c e C o n f i g ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ C o n f i g T I 1 I n p u t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   T I 1 _ S e l e c t i o n ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ S l a v e C o n f i g S y n c h r o ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ S l a v e C o n f i g T y p e D e f   * s S l a v e C o n f i g ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ S l a v e C o n f i g S y n c h r o _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ S l a v e C o n f i g T y p e D e f   * s S l a v e C o n f i g ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ W r i t e S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t B a s e A d d r e s s ,  
                                                                                             u i n t 3 2 _ t   B u r s t R e q u e s t S r c ,   u i n t 3 2 _ t     * B u r s t B u f f e r ,   u i n t 3 2 _ t     B u r s t L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ M u l t i W r i t e S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t B a s e A d d r e s s ,  
                                                                                                       u i n t 3 2 _ t   B u r s t R e q u e s t S r c ,   u i n t 3 2 _ t   * B u r s t B u f f e r ,  
                                                                                                       u i n t 3 2 _ t   B u r s t L e n g t h ,     u i n t 3 2 _ t   D a t a L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ W r i t e S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t R e q u e s t S r c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ R e a d S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t B a s e A d d r e s s ,  
                                                                                           u i n t 3 2 _ t   B u r s t R e q u e s t S r c ,   u i n t 3 2 _ t     * B u r s t B u f f e r ,   u i n t 3 2 _ t     B u r s t L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ M u l t i R e a d S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t B a s e A d d r e s s ,  
                                                                                                     u i n t 3 2 _ t   B u r s t R e q u e s t S r c ,   u i n t 3 2 _ t     * B u r s t B u f f e r ,  
                                                                                                     u i n t 3 2 _ t     B u r s t L e n g t h ,   u i n t 3 2 _ t     D a t a L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ R e a d S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t R e q u e s t S r c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ G e n e r a t e E v e n t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   E v e n t S o u r c e ) ;  
 u i n t 3 2 _ t   H A L _ T I M _ R e a d C a p t u r e d V a l u e ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 9   T I M   C a l l b a c k s   f u n c t i o n s  
     *     @ b r i e f       T I M   C a l l b a c k s   f u n c t i o n s  
     *   @ {  
     * /  
 / *   C a l l b a c k   i n   n o n   b l o c k i n g   m o d e s   ( I n t e r r u p t   a n d   D M A )   * * * * * * * * * * * * * * * * * * * * * * * * * /  
 v o i d   H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ P e r i o d E l a p s e d H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ I C _ C a p t u r e H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ T r i g g e r C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ T r i g g e r H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 v o i d   H A L _ T I M _ E r r o r C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
  
 / *   C a l l b a c k s   R e g i s t e r / U n R e g i s t e r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ R e g i s t e r C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ,   H A L _ T I M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                       p T I M _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ U n R e g i s t e r C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ,   H A L _ T I M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1 0   T I M   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *     @ b r i e f     P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *   @ {  
     * /  
 / *   P e r i p h e r a l   S t a t e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ B a s e _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ O C _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ P W M _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ I C _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ O n e P u l s e _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ E n c o d e r _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
  
 / *   P e r i p h e r a l   C h a n n e l   s t a t e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ T I M _ A c t i v e C h a n n e l   H A L _ T I M _ G e t A c t i v e C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   H A L _ T I M _ G e t C h a n n e l S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ,     u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ T I M _ D M A B u r s t S t a t e T y p e D e f   H A L _ T I M _ D M A B u r s t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
 / *   E n d   o f   e x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   f u n c t i o n s - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   T I M _ P r i v a t e _ F u n c t i o n s   T I M   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 v o i d   T I M _ B a s e _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ B a s e _ I n i t T y p e D e f   * S t r u c t u r e ) ;  
 v o i d   T I M _ T I 1 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C S e l e c t i o n ,   u i n t 3 2 _ t   T I M _ I C F i l t e r ) ;  
 v o i d   T I M _ O C 2 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ O C _ I n i t T y p e D e f   * O C _ C o n f i g ) ;  
 v o i d   T I M _ E T R _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ E x t T R G P r e s c a l e r ,  
                                               u i n t 3 2 _ t   T I M _ E x t T R G P o l a r i t y ,   u i n t 3 2 _ t   E x t T R G F i l t e r ) ;  
  
 v o i d   T I M _ D M A D e l a y P u l s e H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d   T I M _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d   T I M _ D M A C a p t u r e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d   T I M _ D M A C a p t u r e H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d   T I M _ C C x C h a n n e l C m d ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   C h a n n e l S t a t e ) ;  
  
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 v o i d   T I M _ R e s e t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ;  
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
 / *   E n d   o f   p r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ T I M _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  