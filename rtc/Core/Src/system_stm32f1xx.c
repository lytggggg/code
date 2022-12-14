??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s y s t e m _ s t m 3 2 f 1 x x . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       C M S I S   C o r t e x - M 3   D e v i c e   P e r i p h e r a l   A c c e s s   L a y e r   S y s t e m   S o u r c e   F i l e .  
     *    
     *   1 .     T h i s   f i l e   p r o v i d e s   t w o   f u n c t i o n s   a n d   o n e   g l o b a l   v a r i a b l e   t o   b e   c a l l e d   f r o m    
     *           u s e r   a p p l i c a t i o n :  
     *             -   S y s t e m I n i t ( ) :   S e t u p s   t h e   s y s t e m   c l o c k   ( S y s t e m   c l o c k   s o u r c e ,   P L L   M u l t i p l i e r  
     *                                             f a c t o r s ,   A H B / A P B x   p r e s c a l e r s   a n d   F l a s h   s e t t i n g s ) .    
     *                                             T h i s   f u n c t i o n   i s   c a l l e d   a t   s t a r t u p   j u s t   a f t e r   r e s e t   a n d    
     *                                             b e f o r e   b r a n c h   t o   m a i n   p r o g r a m .   T h i s   c a l l   i s   m a d e   i n s i d e  
     *                                             t h e   " s t a r t u p _ s t m 3 2 f 1 x x _ x x . s "   f i l e .  
     *  
     *             -   S y s t e m C o r e C l o c k   v a r i a b l e :   C o n t a i n s   t h e   c o r e   c l o c k   ( H C L K ) ,   i t   c a n   b e   u s e d  
     *                                                                     b y   t h e   u s e r   a p p l i c a t i o n   t o   s e t u p   t h e   S y s T i c k    
     *                                                                     t i m e r   o r   c o n f i g u r e   o t h e r   p a r a m e t e r s .  
     *                                                                            
     *             -   S y s t e m C o r e C l o c k U p d a t e ( ) :   U p d a t e s   t h e   v a r i a b l e   S y s t e m C o r e C l o c k   a n d   m u s t  
     *                                                                   b e   c a l l e d   w h e n e v e r   t h e   c o r e   c l o c k   i s   c h a n g e d  
     *                                                                   d u r i n g   p r o g r a m   e x e c u t i o n .  
     *  
     *   2 .   A f t e r   e a c h   d e v i c e   r e s e t   t h e   H S I   ( 8   M H z )   i s   u s e d   a s   s y s t e m   c l o c k   s o u r c e .  
     *         T h e n   S y s t e m I n i t ( )   f u n c t i o n   i s   c a l l e d ,   i n   " s t a r t u p _ s t m 3 2 f 1 x x _ x x . s "   f i l e ,   t o  
     *         c o n f i g u r e   t h e   s y s t e m   c l o c k   b e f o r e   t o   b r a n c h   t o   m a i n   p r o g r a m .  
     *  
     *   4 .   T h e   d e f a u l t   v a l u e   o f   H S E   c r y s t a l   i s   s e t   t o   8   M H z   ( o r   2 5   M H z ,   d e p e n d i n g   o n  
     *         t h e   p r o d u c t   u s e d ) ,   r e f e r   t o   " H S E _ V A L U E " .    
     *         W h e n   H S E   i s   u s e d   a s   s y s t e m   c l o c k   s o u r c e ,   d i r e c t l y   o r   t h r o u g h   P L L ,   a n d   y o u  
     *         a r e   u s i n g   d i f f e r e n t   c r y s t a l   y o u   h a v e   t o   a d a p t   t h e   H S E   v a l u e   t o   y o u r   o w n  
     *         c o n f i g u r a t i o n .  
     *                  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 7   S T M i c r o e l e c t r o n i c s .  
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
 / * *   @ a d d t o g r o u p   C M S I S  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   s t m 3 2 f 1 x x _ s y s t e m  
     *   @ {  
     * /      
      
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ S y s t e m _ P r i v a t e _ I n c l u d e s  
     *   @ {  
     * /  
  
 # i n c l u d e   " s t m 3 2 f 1 x x . h "  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ S y s t e m _ P r i v a t e _ T y p e s D e f i n i t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ S y s t e m _ P r i v a t e _ D e f i n e s  
     *   @ {  
     * /  
  
 # i f   ! d e f i n e d     ( H S E _ V A L U E )    
     # d e f i n e   H S E _ V A L U E                               8 0 0 0 0 0 0 U   / * ! <   D e f a u l t   v a l u e   o f   t h e   E x t e r n a l   o s c i l l a t o r   i n   H z .  
                                                                                                 T h i s   v a l u e   c a n   b e   p r o v i d e d   a n d   a d a p t e d   b y   t h e   u s e r   a p p l i c a t i o n .   * /  
 # e n d i f   / *   H S E _ V A L U E   * /  
  
 # i f   ! d e f i n e d     ( H S I _ V A L U E )  
     # d e f i n e   H S I _ V A L U E                               8 0 0 0 0 0 0 U   / * ! <   D e f a u l t   v a l u e   o f   t h e   I n t e r n a l   o s c i l l a t o r   i n   H z .  
                                                                                                 T h i s   v a l u e   c a n   b e   p r o v i d e d   a n d   a d a p t e d   b y   t h e   u s e r   a p p l i c a t i o n .   * /  
 # e n d i f   / *   H S I _ V A L U E   * /  
  
 / * ! <   U n c o m m e n t   t h e   f o l l o w i n g   l i n e   i f   y o u   n e e d   t o   u s e   e x t e r n a l   S R A M     * /    
 # i f   d e f i n e d ( S T M 3 2 F 1 0 0 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x G )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G )  
 / *   # d e f i n e   D A T A _ I N _ E x t S R A M   * /  
 # e n d i f   / *   S T M 3 2 F 1 0 0 x E   | |   S T M 3 2 F 1 0 1 x E   | |   S T M 3 2 F 1 0 1 x G   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * /  
  
 / *   N o t e :   F o l l o w i n g   v e c t o r   t a b l e   a d d r e s s e s   m u s t   b e   d e f i n e d   i n   l i n e   w i t h   l i n k e r  
                   c o n f i g u r a t i o n .   * /  
 / * ! <   U n c o m m e n t   t h e   f o l l o w i n g   l i n e   i f   y o u   n e e d   t o   r e l o c a t e   t h e   v e c t o r   t a b l e  
           a n y w h e r e   i n   F l a s h   o r   S r a m ,   e l s e   t h e   v e c t o r   t a b l e   i s   k e p t   a t   t h e   a u t o m a t i c  
           r e m a p   o f   b o o t   a d d r e s s   s e l e c t e d   * /  
 / *   # d e f i n e   U S E R _ V E C T _ T A B _ A D D R E S S   * /  
  
 # i f   d e f i n e d ( U S E R _ V E C T _ T A B _ A D D R E S S )  
 / * ! <   U n c o m m e n t   t h e   f o l l o w i n g   l i n e   i f   y o u   n e e d   t o   r e l o c a t e   y o u r   v e c t o r   T a b l e  
           i n   S r a m   e l s e   u s e r   r e m a p   w i l l   b e   d o n e   i n   F l a s h .   * /  
 / *   # d e f i n e   V E C T _ T A B _ S R A M   * /  
 # i f   d e f i n e d ( V E C T _ T A B _ S R A M )  
 # d e f i n e   V E C T _ T A B _ B A S E _ A D D R E S S       S R A M _ B A S E               / * ! <   V e c t o r   T a b l e   b a s e   a d d r e s s   f i e l d .  
                                                                                                           T h i s   v a l u e   m u s t   b e   a   m u l t i p l e   o f   0 x 2 0 0 .   * /  
 # d e f i n e   V E C T _ T A B _ O F F S E T                   0 x 0 0 0 0 0 0 0 0 U           / * ! <   V e c t o r   T a b l e   b a s e   o f f s e t   f i e l d .  
                                                                                                           T h i s   v a l u e   m u s t   b e   a   m u l t i p l e   o f   0 x 2 0 0 .   * /  
 # e l s e  
 # d e f i n e   V E C T _ T A B _ B A S E _ A D D R E S S       F L A S H _ B A S E             / * ! <   V e c t o r   T a b l e   b a s e   a d d r e s s   f i e l d .  
                                                                                                           T h i s   v a l u e   m u s t   b e   a   m u l t i p l e   o f   0 x 2 0 0 .   * /  
 # d e f i n e   V E C T _ T A B _ O F F S E T                   0 x 0 0 0 0 0 0 0 0 U           / * ! <   V e c t o r   T a b l e   b a s e   o f f s e t   f i e l d .  
                                                                                                           T h i s   v a l u e   m u s t   b e   a   m u l t i p l e   o f   0 x 2 0 0 .   * /  
 # e n d i f   / *   V E C T _ T A B _ S R A M   * /  
 # e n d i f   / *   U S E R _ V E C T _ T A B _ A D D R E S S   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ S y s t e m _ P r i v a t e _ M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ S y s t e m _ P r i v a t e _ V a r i a b l e s  
     *   @ {  
     * /  
  
     / *   T h i s   v a r i a b l e   i s   u p d a t e d   i n   t h r e e   w a y s :  
             1 )   b y   c a l l i n g   C M S I S   f u n c t i o n   S y s t e m C o r e C l o c k U p d a t e ( )  
             2 )   b y   c a l l i n g   H A L   A P I   f u n c t i o n   H A L _ R C C _ G e t H C L K F r e q ( )  
             3 )   e a c h   t i m e   H A L _ R C C _ C l o c k C o n f i g ( )   i s   c a l l e d   t o   c o n f i g u r e   t h e   s y s t e m   c l o c k   f r e q u e n c y    
                   N o t e :   I f   y o u   u s e   t h i s   f u n c t i o n   t o   c o n f i g u r e   t h e   s y s t e m   c l o c k ;   t h e n   t h e r e  
                               i s   n o   n e e d   t o   c a l l   t h e   2   f i r s t   f u n c t i o n s   l i s t e d   a b o v e ,   s i n c e   S y s t e m C o r e C l o c k  
                               v a r i a b l e   i s   u p d a t e d   a u t o m a t i c a l l y .  
     * /  
 u i n t 3 2 _ t   S y s t e m C o r e C l o c k   =   1 6 0 0 0 0 0 0 ;  
 c o n s t   u i n t 8 _ t   A H B P r e s c T a b l e [ 1 6 U ]   =   { 0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   1 ,   2 ,   3 ,   4 ,   6 ,   7 ,   8 ,   9 } ;  
 c o n s t   u i n t 8 _ t   A P B P r e s c T a b l e [ 8 U ]   =     { 0 ,   0 ,   0 ,   0 ,   1 ,   2 ,   3 ,   4 } ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ S y s t e m _ P r i v a t e _ F u n c t i o n P r o t o t y p e s  
     *   @ {  
     * /  
  
 # i f   d e f i n e d ( S T M 3 2 F 1 0 0 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x G )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G )  
 # i f d e f   D A T A _ I N _ E x t S R A M  
     s t a t i c   v o i d   S y s t e m I n i t _ E x t M e m C t l ( v o i d ) ;    
 # e n d i f   / *   D A T A _ I N _ E x t S R A M   * /  
 # e n d i f   / *   S T M 3 2 F 1 0 0 x E   | |   S T M 3 2 F 1 0 1 x E   | |   S T M 3 2 F 1 0 1 x G   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ S y s t e m _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t u p   t h e   m i c r o c o n t r o l l e r   s y s t e m  
     *                   I n i t i a l i z e   t h e   E m b e d d e d   F l a s h   I n t e r f a c e ,   t h e   P L L   a n d   u p d a t e   t h e    
     *                   S y s t e m C o r e C l o c k   v a r i a b l e .  
     *   @ n o t e       T h i s   f u n c t i o n   s h o u l d   b e   u s e d   o n l y   a f t e r   r e s e t .  
     *   @ p a r a m     N o n e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   S y s t e m I n i t   ( v o i d )  
 {  
 # i f   d e f i n e d ( S T M 3 2 F 1 0 0 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x G )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G )  
     # i f d e f   D A T A _ I N _ E x t S R A M  
         S y s t e m I n i t _ E x t M e m C t l ( ) ;    
     # e n d i f   / *   D A T A _ I N _ E x t S R A M   * /  
 # e n d i f    
  
     / *   C o n f i g u r e   t h e   V e c t o r   T a b l e   l o c a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E R _ V E C T _ T A B _ A D D R E S S )  
     S C B - > V T O R   =   V E C T _ T A B _ B A S E _ A D D R E S S   |   V E C T _ T A B _ O F F S E T ;   / *   V e c t o r   T a b l e   R e l o c a t i o n   i n   I n t e r n a l   S R A M .   * /  
 # e n d i f   / *   U S E R _ V E C T _ T A B _ A D D R E S S   * /  
 }  
  
 / * *  
     *   @ b r i e f     U p d a t e   S y s t e m C o r e C l o c k   v a r i a b l e   a c c o r d i n g   t o   C l o c k   R e g i s t e r   V a l u e s .  
     *                   T h e   S y s t e m C o r e C l o c k   v a r i a b l e   c o n t a i n s   t h e   c o r e   c l o c k   ( H C L K ) ,   i t   c a n  
     *                   b e   u s e d   b y   t h e   u s e r   a p p l i c a t i o n   t o   s e t u p   t h e   S y s T i c k   t i m e r   o r   c o n f i g u r e  
     *                   o t h e r   p a r a m e t e r s .  
     *                        
     *   @ n o t e       E a c h   t i m e   t h e   c o r e   c l o c k   ( H C L K )   c h a n g e s ,   t h i s   f u n c t i o n   m u s t   b e   c a l l e d  
     *                   t o   u p d a t e   S y s t e m C o r e C l o c k   v a r i a b l e   v a l u e .   O t h e r w i s e ,   a n y   c o n f i g u r a t i o n  
     *                   b a s e d   o n   t h i s   v a r i a b l e   w i l l   b e   i n c o r r e c t .                    
     *            
     *   @ n o t e       -   T h e   s y s t e m   f r e q u e n c y   c o m p u t e d   b y   t h i s   f u n c t i o n   i s   n o t   t h e   r e a l    
     *                       f r e q u e n c y   i n   t h e   c h i p .   I t   i s   c a l c u l a t e d   b a s e d   o n   t h e   p r e d e f i n e d    
     *                       c o n s t a n t   a n d   t h e   s e l e c t e d   c l o c k   s o u r c e :  
     *                            
     *                       -   I f   S Y S C L K   s o u r c e   i s   H S I ,   S y s t e m C o r e C l o c k   w i l l   c o n t a i n   t h e   H S I _ V A L U E ( * )  
     *                                                                                              
     *                       -   I f   S Y S C L K   s o u r c e   i s   H S E ,   S y s t e m C o r e C l o c k   w i l l   c o n t a i n   t h e   H S E _ V A L U E ( * * )  
     *                                                      
     *                       -   I f   S Y S C L K   s o u r c e   i s   P L L ,   S y s t e m C o r e C l o c k   w i l l   c o n t a i n   t h e   H S E _ V A L U E ( * * )    
     *                           o r   H S I _ V A L U E ( * )   m u l t i p l i e d   b y   t h e   P L L   f a c t o r s .  
     *                    
     *                   ( * )   H S I _ V A L U E   i s   a   c o n s t a n t   d e f i n e d   i n   s t m 3 2 f 1 x x . h   f i l e   ( d e f a u l t   v a l u e  
     *                           8   M H z )   b u t   t h e   r e a l   v a l u e   m a y   v a r y   d e p e n d i n g   o n   t h e   v a r i a t i o n s  
     *                           i n   v o l t a g e   a n d   t e m p e r a t u r e .        
     *          
     *                   ( * * )   H S E _ V A L U E   i s   a   c o n s t a n t   d e f i n e d   i n   s t m 3 2 f 1 x x . h   f i l e   ( d e f a u l t   v a l u e  
     *                             8   M H z   o r   2 5   M H z ,   d e p e n d i n g   o n   t h e   p r o d u c t   u s e d ) ,   u s e r   h a s   t o   e n s u r e  
     *                             t h a t   H S E _ V A L U E   i s   s a m e   a s   t h e   r e a l   f r e q u e n c y   o f   t h e   c r y s t a l   u s e d .  
     *                             O t h e r w i s e ,   t h i s   f u n c t i o n   m a y   h a v e   w r o n g   r e s u l t .  
     *                                  
     *                   -   T h e   r e s u l t   o f   t h i s   f u n c t i o n   c o u l d   b e   n o t   c o r r e c t   w h e n   u s i n g   f r a c t i o n a l  
     *                       v a l u e   f o r   H S E   c r y s t a l .  
     *   @ p a r a m     N o n e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   S y s t e m C o r e C l o c k U p d a t e   ( v o i d )  
 {  
     u i n t 3 2 _ t   t m p   =   0 U ,   p l l m u l l   =   0 U ,   p l l s o u r c e   =   0 U ;  
  
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C )  
     u i n t 3 2 _ t   p r e d i v 1 s o u r c e   =   0 U ,   p r e d i v 1 f a c t o r   =   0 U ,   p r e d i v 2 f a c t o r   =   0 U ,   p l l 2 m u l l   =   0 U ;  
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   * /  
  
 # i f   d e f i n e d ( S T M 3 2 F 1 0 0 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 0 x E )  
     u i n t 3 2 _ t   p r e d i v 1 f a c t o r   =   0 U ;  
 # e n d i f   / *   S T M 3 2 F 1 0 0 x B   o r   S T M 3 2 F 1 0 0 x E   * /  
          
     / *   G e t   S Y S C L K   s o u r c e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     t m p   =   R C C - > C F G R   &   R C C _ C F G R _ S W S ;  
      
     s w i t c h   ( t m p )  
     {  
         c a s e   0 x 0 0 U :     / *   H S I   u s e d   a s   s y s t e m   c l o c k   * /  
             S y s t e m C o r e C l o c k   =   H S I _ V A L U E ;  
             b r e a k ;  
         c a s e   0 x 0 4 U :     / *   H S E   u s e d   a s   s y s t e m   c l o c k   * /  
             S y s t e m C o r e C l o c k   =   H S E _ V A L U E ;  
             b r e a k ;  
         c a s e   0 x 0 8 U :     / *   P L L   u s e d   a s   s y s t e m   c l o c k   * /  
  
             / *   G e t   P L L   c l o c k   s o u r c e   a n d   m u l t i p l i c a t i o n   f a c t o r   - - - - - - - - - - - - - - - - - - - - - - * /  
             p l l m u l l   =   R C C - > C F G R   &   R C C _ C F G R _ P L L M U L L ;  
             p l l s o u r c e   =   R C C - > C F G R   &   R C C _ C F G R _ P L L S R C ;  
              
 # i f   ! d e f i n e d ( S T M 3 2 F 1 0 5 x C )   & &   ! d e f i n e d ( S T M 3 2 F 1 0 7 x C )              
             p l l m u l l   =   (   p l l m u l l   > >   1 8 U )   +   2 U ;  
              
             i f   ( p l l s o u r c e   = =   0 x 0 0 U )  
             {  
                 / *   H S I   o s c i l l a t o r   c l o c k   d i v i d e d   b y   2   s e l e c t e d   a s   P L L   c l o c k   e n t r y   * /  
                 S y s t e m C o r e C l o c k   =   ( H S I _ V A L U E   > >   1 U )   *   p l l m u l l ;  
             }  
             e l s e  
             {  
   # i f   d e f i n e d ( S T M 3 2 F 1 0 0 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 0 x E )  
               p r e d i v 1 f a c t o r   =   ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 1 )   +   1 U ;  
               / *   H S E   o s c i l l a t o r   c l o c k   s e l e c t e d   a s   P R E D I V 1   c l o c k   e n t r y   * /  
               S y s t e m C o r e C l o c k   =   ( H S E _ V A L U E   /   p r e d i v 1 f a c t o r )   *   p l l m u l l ;    
   # e l s e  
                 / *   H S E   s e l e c t e d   a s   P L L   c l o c k   e n t r y   * /  
                 i f   ( ( R C C - > C F G R   &   R C C _ C F G R _ P L L X T P R E )   ! =   ( u i n t 3 2 _ t ) R E S E T )  
                 { / *   H S E   o s c i l l a t o r   c l o c k   d i v i d e d   b y   2   * /  
                     S y s t e m C o r e C l o c k   =   ( H S E _ V A L U E   > >   1 U )   *   p l l m u l l ;  
                 }  
                 e l s e  
                 {  
                     S y s t e m C o r e C l o c k   =   H S E _ V A L U E   *   p l l m u l l ;  
                 }  
   # e n d i f  
             }  
 # e l s e  
             p l l m u l l   =   p l l m u l l   > >   1 8 U ;  
              
             i f   ( p l l m u l l   ! =   0 x 0 D U )  
             {  
                   p l l m u l l   + =   2 U ;  
             }  
             e l s e  
             {   / *   P L L   m u l t i p l i c a t i o n   f a c t o r   =   P L L   i n p u t   c l o c k   *   6 . 5   * /  
                 p l l m u l l   =   1 3 U   /   2 U ;    
             }  
                          
             i f   ( p l l s o u r c e   = =   0 x 0 0 U )  
             {  
                 / *   H S I   o s c i l l a t o r   c l o c k   d i v i d e d   b y   2   s e l e c t e d   a s   P L L   c l o c k   e n t r y   * /  
                 S y s t e m C o r e C l o c k   =   ( H S I _ V A L U E   > >   1 U )   *   p l l m u l l ;  
             }  
             e l s e  
             { / *   P R E D I V 1   s e l e c t e d   a s   P L L   c l o c k   e n t r y   * /  
                  
                 / *   G e t   P R E D I V 1   c l o c k   s o u r c e   a n d   d i v i s i o n   f a c t o r   * /  
                 p r e d i v 1 s o u r c e   =   R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 1 S R C ;  
                 p r e d i v 1 f a c t o r   =   ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 1 )   +   1 U ;  
                  
                 i f   ( p r e d i v 1 s o u r c e   = =   0 U )  
                 {    
                     / *   H S E   o s c i l l a t o r   c l o c k   s e l e c t e d   a s   P R E D I V 1   c l o c k   e n t r y   * /  
                     S y s t e m C o r e C l o c k   =   ( H S E _ V A L U E   /   p r e d i v 1 f a c t o r )   *   p l l m u l l ;                      
                 }  
                 e l s e  
                 { / *   P L L 2   c l o c k   s e l e c t e d   a s   P R E D I V 1   c l o c k   e n t r y   * /  
                      
                     / *   G e t   P R E D I V 2   d i v i s i o n   f a c t o r   a n d   P L L 2   m u l t i p l i c a t i o n   f a c t o r   * /  
                     p r e d i v 2 f a c t o r   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 2 )   > >   4 U )   +   1 U ;  
                     p l l 2 m u l l   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P L L 2 M U L )   > >   8 U )   +   2 U ;    
                     S y s t e m C o r e C l o c k   =   ( ( ( H S E _ V A L U E   /   p r e d i v 2 f a c t o r )   *   p l l 2 m u l l )   /   p r e d i v 1 f a c t o r )   *   p l l m u l l ;                                                    
                 }  
             }  
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   * /    
             b r e a k ;  
  
         d e f a u l t :  
             S y s t e m C o r e C l o c k   =   H S I _ V A L U E ;  
             b r e a k ;  
     }  
      
     / *   C o m p u t e   H C L K   c l o c k   f r e q u e n c y   - - - - - - - - - - - - - - - - * /  
     / *   G e t   H C L K   p r e s c a l e r   * /  
     t m p   =   A H B P r e s c T a b l e [ ( ( R C C - > C F G R   &   R C C _ C F G R _ H P R E )   > >   4 U ) ] ;  
     / *   H C L K   c l o c k   f r e q u e n c y   * /  
     S y s t e m C o r e C l o c k   > > =   t m p ;      
 }  
  
 # i f   d e f i n e d ( S T M 3 2 F 1 0 0 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x G )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G )  
 / * *  
     *   @ b r i e f     S e t u p   t h e   e x t e r n a l   m e m o r y   c o n t r o l l e r .   C a l l e d   i n   s t a r t u p _ s t m 3 2 f 1 x x . s    
     *                     b e f o r e   j u m p   t o   _ _ m a i n  
     *   @ p a r a m     N o n e  
     *   @ r e t v a l   N o n e  
     * /    
 # i f d e f   D A T A _ I N _ E x t S R A M  
 / * *  
     *   @ b r i e f     S e t u p   t h e   e x t e r n a l   m e m o r y   c o n t r o l l e r .    
     *                   C a l l e d   i n   s t a r t u p _ s t m 3 2 f 1 x x _ x x . s / . c   b e f o r e   j u m p   t o   m a i n .  
     *                   T h i s   f u n c t i o n   c o n f i g u r e s   t h e   e x t e r n a l   S R A M   m o u n t e d   o n   S T M 3 2 1 0 E - E V A L  
     *                   b o a r d   ( S T M 3 2   H i g h   d e n s i t y   d e v i c e s ) .   T h i s   S R A M   w i l l   b e   u s e d   a s   p r o g r a m  
     *                   d a t a   m e m o r y   ( i n c l u d i n g   h e a p   a n d   s t a c k ) .  
     *   @ p a r a m     N o n e  
     *   @ r e t v a l   N o n e  
     * /    
 v o i d   S y s t e m I n i t _ E x t M e m C t l ( v o i d )    
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     / * ! <   F S M C   B a n k 1   N O R / S R A M 3   i s   u s e d   f o r   t h e   S T M 3 2 1 0 E - E V A L ,   i f   a n o t h e r   B a n k   i s    
         r e q u i r e d ,   t h e n   a d j u s t   t h e   R e g i s t e r   A d d r e s s e s   * /  
  
     / *   E n a b l e   F S M C   c l o c k   * /  
     R C C - > A H B E N R   =   0 x 0 0 0 0 0 1 1 4 U ;  
  
     / *   D e l a y   a f t e r   a n   R C C   p e r i p h e r a l   c l o c k   e n a b l i n g   * /  
     t m p r e g   =   R E A D _ B I T ( R C C - > A H B E N R ,   R C C _ A H B E N R _ F S M C E N ) ;  
      
     / *   E n a b l e   G P I O D ,   G P I O E ,   G P I O F   a n d   G P I O G   c l o c k s   * /  
     R C C - > A P B 2 E N R   =   0 x 0 0 0 0 0 1 E 0 U ;  
      
     / *   D e l a y   a f t e r   a n   R C C   p e r i p h e r a l   c l o c k   e n a b l i n g   * /  
     t m p r e g   =   R E A D _ B I T ( R C C - > A P B 2 E N R ,   R C C _ A P B 2 E N R _ I O P D E N ) ;  
  
     ( v o i d ) ( t m p r e g ) ;  
      
 / *   - - - - - - - - - - - - - - -     S R A M   D a t a   l i n e s ,   N O E   a n d   N W E   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - * /  
 / * - - - - - - - - - - - - - - - -     S R A M   A d d r e s s   l i n e s   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * - - - - - - - - - - - - - - - -     N O E   a n d   N W E   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /      
 / * - - - - - - - - - - - - - - - -     N E 3   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * - - - - - - - - - - - - - - - -     N B L 0 ,   N B L 1   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
      
     G P I O D - > C R L   =   0 x 4 4 B B 4 4 B B U ;      
     G P I O D - > C R H   =   0 x B B B B B B B B U ;  
  
     G P I O E - > C R L   =   0 x B 4 4 4 4 4 B B U ;      
     G P I O E - > C R H   =   0 x B B B B B B B B U ;  
  
     G P I O F - > C R L   =   0 x 4 4 B B B B B B U ;      
     G P I O F - > C R H   =   0 x B B B B 4 4 4 4 U ;  
  
     G P I O G - > C R L   =   0 x 4 4 B B B B B B U ;      
     G P I O G - > C R H   =   0 x 4 4 4 B 4 B 4 4 U ;  
        
 / * - - - - - - - - - - - - - - - -     F S M C   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /      
 / * - - - - - - - - - - - - - - - -     E n a b l e   F S M C   B a n k 1 _ S R A M   B a n k   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
      
     F S M C _ B a n k 1 - > B T C R [ 4 U ]   =   0 x 0 0 0 0 1 0 9 1 U ;  
     F S M C _ B a n k 1 - > B T C R [ 5 U ]   =   0 x 0 0 1 1 0 2 1 2 U ;  
 }  
 # e n d i f   / *   D A T A _ I N _ E x t S R A M   * /  
 # e n d i f   / *   S T M 3 2 F 1 0 0 x E   | |   S T M 3 2 F 1 0 1 x E   | |   S T M 3 2 F 1 0 1 x G   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
      
 / * *  
     *   @ }  
     * /          
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  