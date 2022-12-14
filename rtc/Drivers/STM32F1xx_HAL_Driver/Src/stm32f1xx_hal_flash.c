??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ f l a s h . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       F L A S H   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g    
     *                     f u n c t i o n a l i t i e s   o f   t h e   i n t e r n a l   F L A S H   m e m o r y :  
     *                       +   P r o g r a m   o p e r a t i o n s   f u n c t i o n s  
     *                       +   M e m o r y   C o n t r o l   f u n c t i o n s    
     *                       +   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *                    
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   F L A S H   p e r i p h e r a l   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]   T h e   F l a s h   m e m o r y   i n t e r f a c e   m a n a g e s   C P U   A H B   I - C o d e   a n d   D - C o d e   a c c e s s e s    
               t o   t h e   F l a s h   m e m o r y .   I t   i m p l e m e n t s   t h e   e r a s e   a n d   p r o g r a m   F l a s h   m e m o r y   o p e r a t i o n s    
               a n d   t h e   r e a d   a n d   w r i t e   p r o t e c t i o n   m e c h a n i s m s .  
  
     [ . . ]   T h e   F l a s h   m e m o r y   i n t e r f a c e   a c c e l e r a t e s   c o d e   e x e c u t i o n   w i t h   a   s y s t e m   o f   i n s t r u c t i o n  
             p r e f e t c h .    
  
     [ . . ]   T h e   F L A S H   m a i n   f e a t u r e s   a r e :  
             ( + )   F l a s h   m e m o r y   r e a d   o p e r a t i o n s  
             ( + )   F l a s h   m e m o r y   p r o g r a m / e r a s e   o p e r a t i o n s  
             ( + )   R e a d   /   w r i t e   p r o t e c t i o n s  
             ( + )   P r e f e t c h   o n   I - C o d e  
             ( + )   O p t i o n   B y t e s   p r o g r a m m i n g  
  
  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]                                                            
             T h i s   d r i v e r   p r o v i d e s   f u n c t i o n s   a n d   m a c r o s   t o   c o n f i g u r e   a n d   p r o g r a m   t h e   F L A S H    
             m e m o r y   o f   a l l   S T M 3 2 F 1 x x   d e v i c e s .  
          
             ( # )   F L A S H   M e m o r y   I / O   P r o g r a m m i n g   f u n c t i o n s :   t h i s   g r o u p   i n c l u d e s   a l l   n e e d e d  
                     f u n c t i o n s   t o   e r a s e   a n d   p r o g r a m   t h e   m a i n   m e m o r y :  
                 ( + + )   L o c k   a n d   U n l o c k   t h e   F L A S H   i n t e r f a c e  
                 ( + + )   E r a s e   f u n c t i o n :   E r a s e   p a g e ,   e r a s e   a l l   p a g e s  
                 ( + + )   P r o g r a m   f u n c t i o n s :   h a l f   w o r d ,   w o r d   a n d   d o u b l e w o r d  
             ( # )   F L A S H   O p t i o n   B y t e s   P r o g r a m m i n g   f u n c t i o n s :   t h i s   g r o u p   i n c l u d e s   a l l   n e e d e d  
                     f u n c t i o n s   t o   m a n a g e   t h e   O p t i o n   B y t e s :  
                 ( + + )   L o c k   a n d   U n l o c k   t h e   O p t i o n   B y t e s  
                 ( + + )   S e t / R e s e t   t h e   w r i t e   p r o t e c t i o n  
                 ( + + )   S e t   t h e   R e a d   p r o t e c t i o n   L e v e l  
                 ( + + )   P r o g r a m   t h e   u s e r   O p t i o n   B y t e s  
                 ( + + )   L a u n c h   t h e   O p t i o n   B y t e s   l o a d e r  
                 ( + + )   E r a s e   O p t i o n   B y t e s  
                 ( + + )   P r o g r a m   t h e   d a t a   O p t i o n   B y t e s  
                 ( + + )   G e t   t h e   W r i t e   p r o t e c t i o n .  
                 ( + + )   G e t   t h e   u s e r   o p t i o n   b y t e s .  
          
             ( # )   I n t e r r u p t s   a n d   f l a g s   m a n a g e m e n t   f u n c t i o n s   :   t h i s   g r o u p    
                     i n c l u d e s   a l l   n e e d e d   f u n c t i o n s   t o :  
                 ( + + )   H a n d l e   F L A S H   i n t e r r u p t s  
                 ( + + )   W a i t   f o r   l a s t   F L A S H   o p e r a t i o n   a c c o r d i n g   t o   i t s   s t a t u s  
                 ( + + )   G e t   e r r o r   f l a g   s t a t u s  
  
     [ . . ]   I n   a d d i t i o n   t o   t h e s e   f u n c t i o n ,   t h i s   d r i v e r   i n c l u d e s   a   s e t   o f   m a c r o s   a l l o w i n g  
               t o   h a n d l e   t h e   f o l l o w i n g   o p e r a t i o n s :  
              
             ( + )   S e t / G e t   t h e   l a t e n c y  
             ( + )   E n a b l e / D i s a b l e   t h e   p r e f e t c h   b u f f e r  
             ( + )   E n a b l e / D i s a b l e   t h e   h a l f   c y c l e   a c c e s s  
             ( + )   E n a b l e / D i s a b l e   t h e   F L A S H   i n t e r r u p t s  
             ( + )   M o n i t o r   t h e   F L A S H   f l a g s   s t a t u s  
                      
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
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ F L A S H _ M O D U L E _ E N A B L E D  
  
 / * *   @ d e f g r o u p   F L A S H   F L A S H  
     *   @ b r i e f   F L A S H   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   F L A S H _ P r i v a t e _ C o n s t a n t s   F L A S H   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - -   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   F L A S H _ P r i v a t e _ M a c r o s   F L A S H   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
    
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   F L A S H _ P r i v a t e _ V a r i a b l e s   F L A S H   P r i v a t e   V a r i a b l e s  
     *   @ {  
     * /  
 / *   V a r i a b l e s   u s e d   f o r   E r a s e   p a g e s   u n d e r   i n t e r r u p t i o n * /  
 F L A S H _ P r o c e s s T y p e D e f   p F l a s h ;  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   F L A S H _ P r i v a t e _ F u n c t i o n s   F L A S H   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c     v o i d       F L A S H _ P r o g r a m _ H a l f W o r d ( u i n t 3 2 _ t   A d d r e s s ,   u i n t 1 6 _ t   D a t a ) ;  
 s t a t i c     v o i d       F L A S H _ S e t E r r o r C o d e ( v o i d ) ;  
 e x t e r n   v o i d         F L A S H _ P a g e E r a s e ( u i n t 3 2 _ t   P a g e A d d r e s s ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   F L A S H _ E x p o r t e d _ F u n c t i o n s   F L A S H   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
      
 / * *   @ d e f g r o u p   F L A S H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   P r o g r a m m i n g   o p e r a t i o n   f u n c t i o n s    
     *     @ b r i e f       P r o g r a m m i n g   o p e r a t i o n   f u n c t i o n s    
     *  
 @ v e r b a t i m        
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P r o g r a m   h a l f w o r d ,   w o r d   o r   d o u b l e   w o r d   a t   a   s p e c i f i e d   a d d r e s s  
     *   @ n o t e       T h e   f u n c t i o n   H A L _ F L A S H _ U n l o c k ( )   s h o u l d   b e   c a l l e d   b e f o r e   t o   u n l o c k   t h e   F L A S H   i n t e r f a c e  
     *                   T h e   f u n c t i o n   H A L _ F L A S H _ L o c k ( )   s h o u l d   b e   c a l l e d   a f t e r   t o   l o c k   t h e   F L A S H   i n t e r f a c e  
     *  
     *   @ n o t e       I f   a n   e r a s e   a n d   a   p r o g r a m   o p e r a t i o n s   a r e   r e q u e s t e d   s i m u l t a n e o u s l y ,          
     *                   t h e   e r a s e   o p e r a t i o n   i s   p e r f o r m e d   b e f o r e   t h e   p r o g r a m   o n e .  
     *      
     *   @ n o t e       F L A S H   s h o u l d   b e   p r e v i o u s l y   e r a s e d   b e f o r e   n e w   p r o g r a m m a t i o n   ( o n l y   e x c e p t i o n   t o   t h i s    
     *                   i s   w h e n   0 x 0 0 0 0   i s   p r o g r a m m e d )  
     *  
     *   @ p a r a m     T y p e P r o g r a m :     I n d i c a t e   t h e   w a y   t o   p r o g r a m   a t   a   s p e c i f i e d   a d d r e s s .  
     *                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   F L A S H _ T y p e _ P r o g r a m  
     *   @ p a r a m     A d d r e s s :             S p e c i f i e s   t h e   a d d r e s s   t o   b e   p r o g r a m m e d .  
     *   @ p a r a m     D a t a :                   S p e c i f i e s   t h e   d a t a   t o   b e   p r o g r a m m e d  
     *    
     *   @ r e t v a l   H A L _ S t a t u s T y p e D e f   H A L   S t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ P r o g r a m ( u i n t 3 2 _ t   T y p e P r o g r a m ,   u i n t 3 2 _ t   A d d r e s s ,   u i n t 6 4 _ t   D a t a )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ E R R O R ;  
     u i n t 8 _ t   i n d e x   =   0 ;  
     u i n t 8 _ t   n b i t e r a t i o n s   =   0 ;  
      
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( & p F l a s h ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F L A S H _ T Y P E P R O G R A M ( T y p e P r o g r a m ) ) ;  
     a s s e r t _ p a r a m ( I S _ F L A S H _ P R O G R A M _ A D D R E S S ( A d d r e s s ) ) ;  
  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     i f ( A d d r e s s   < =   F L A S H _ B A N K 1 _ E N D )  
     {  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
         / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * /  
         s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( F L A S H _ T I M E O U T _ V A L U E ) ;  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     }  
     e l s e  
     {  
         / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * /  
         s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( F L A S H _ T I M E O U T _ V A L U E ) ;  
     }  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
      
     i f ( s t a t u s   = =   H A L _ O K )  
     {  
         i f ( T y p e P r o g r a m   = =   F L A S H _ T Y P E P R O G R A M _ H A L F W O R D )  
         {  
             / *   P r o g r a m   h a l f w o r d   ( 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s .   * /  
             n b i t e r a t i o n s   =   1 U ;  
         }  
         e l s e   i f ( T y p e P r o g r a m   = =   F L A S H _ T Y P E P R O G R A M _ W O R D )  
         {  
             / *   P r o g r a m   w o r d   ( 3 2 - b i t   =   2 * 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s .   * /  
             n b i t e r a t i o n s   =   2 U ;  
         }  
         e l s e  
         {  
             / *   P r o g r a m   d o u b l e   w o r d   ( 6 4 - b i t   =   4 * 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s .   * /  
             n b i t e r a t i o n s   =   4 U ;  
         }  
  
         f o r   ( i n d e x   =   0 U ;   i n d e x   <   n b i t e r a t i o n s ;   i n d e x + + )  
         {  
             F L A S H _ P r o g r a m _ H a l f W o r d ( ( A d d r e s s   +   ( 2 U * i n d e x ) ) ,   ( u i n t 1 6 _ t ) ( D a t a   > >   ( 1 6 U * i n d e x ) ) ) ;  
  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
             i f ( A d d r e s s   < =   F L A S H _ B A N K 1 _ E N D )  
             {  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * /  
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( F L A S H _ T I M E O U T _ V A L U E ) ;  
          
                 / *   I f   t h e   p r o g r a m   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P G   B i t   * /  
                 C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ P G ) ;  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
             }  
             e l s e  
             {  
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * /  
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( F L A S H _ T I M E O U T _ V A L U E ) ;  
                  
                 / *   I f   t h e   p r o g r a m   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P G   B i t   * /  
                 C L E A R _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ P G ) ;  
             }  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
             / *   I n   c a s e   o f   e r r o r ,   s t o p   p r o g r a m a t i o n   p r o c e d u r e   * /  
             i f   ( s t a t u s   ! =   H A L _ O K )  
             {  
                 b r e a k ;  
             }  
         }  
     }  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( & p F l a s h ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     P r o g r a m   h a l f w o r d ,   w o r d   o r   d o u b l e   w o r d   a t   a   s p e c i f i e d   a d d r e s s     w i t h   i n t e r r u p t   e n a b l e d .  
     *   @ n o t e       T h e   f u n c t i o n   H A L _ F L A S H _ U n l o c k ( )   s h o u l d   b e   c a l l e d   b e f o r e   t o   u n l o c k   t h e   F L A S H   i n t e r f a c e  
     *                   T h e   f u n c t i o n   H A L _ F L A S H _ L o c k ( )   s h o u l d   b e   c a l l e d   a f t e r   t o   l o c k   t h e   F L A S H   i n t e r f a c e  
     *  
     *   @ n o t e       I f   a n   e r a s e   a n d   a   p r o g r a m   o p e r a t i o n s   a r e   r e q u e s t e d   s i m u l t a n e o u s l y ,          
     *                   t h e   e r a s e   o p e r a t i o n   i s   p e r f o r m e d   b e f o r e   t h e   p r o g r a m   o n e .  
     *  
     *   @ p a r a m     T y p e P r o g r a m :   I n d i c a t e   t h e   w a y   t o   p r o g r a m   a t   a   s p e c i f i e d   a d d r e s s .  
     *                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   F L A S H _ T y p e _ P r o g r a m  
     *   @ p a r a m     A d d r e s s :           S p e c i f i e s   t h e   a d d r e s s   t o   b e   p r o g r a m m e d .  
     *   @ p a r a m     D a t a :                 S p e c i f i e s   t h e   d a t a   t o   b e   p r o g r a m m e d  
     *    
     *   @ r e t v a l   H A L _ S t a t u s T y p e D e f   H A L   S t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ P r o g r a m _ I T ( u i n t 3 2 _ t   T y p e P r o g r a m ,   u i n t 3 2 _ t   A d d r e s s ,   u i n t 6 4 _ t   D a t a )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
      
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( & p F l a s h ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F L A S H _ T Y P E P R O G R A M ( T y p e P r o g r a m ) ) ;  
     a s s e r t _ p a r a m ( I S _ F L A S H _ P R O G R A M _ A D D R E S S ( A d d r e s s ) ) ;  
  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     / *   I f   p r o c e d u r e   a l r e a d y   o n g o i n g ,   r e j e c t   t h e   n e x t   o n e   * /  
     i f   ( p F l a s h . P r o c e d u r e O n G o i n g   ! =   F L A S H _ P R O C _ N O N E )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
      
     i f ( A d d r e s s   < =   F L A S H _ B A N K 1 _ E N D )  
     {  
         / *   E n a b l e   E n d   o f   F L A S H   O p e r a t i o n   a n d   E r r o r   s o u r c e   i n t e r r u p t s   * /  
         _ _ H A L _ F L A S H _ E N A B L E _ I T ( F L A S H _ I T _ E O P _ B A N K 1   |   F L A S H _ I T _ E R R _ B A N K 1 ) ;  
  
     } e l s e  
     {  
         / *   E n a b l e   E n d   o f   F L A S H   O p e r a t i o n   a n d   E r r o r   s o u r c e   i n t e r r u p t s   * /  
         _ _ H A L _ F L A S H _ E N A B L E _ I T ( F L A S H _ I T _ E O P _ B A N K 2   |   F L A S H _ I T _ E R R _ B A N K 2 ) ;  
     }  
 # e l s e  
     / *   E n a b l e   E n d   o f   F L A S H   O p e r a t i o n   a n d   E r r o r   s o u r c e   i n t e r r u p t s   * /  
     _ _ H A L _ F L A S H _ E N A B L E _ I T ( F L A S H _ I T _ E O P   |   F L A S H _ I T _ E R R ) ;  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
      
     p F l a s h . A d d r e s s   =   A d d r e s s ;  
     p F l a s h . D a t a   =   D a t a ;  
  
     i f ( T y p e P r o g r a m   = =   F L A S H _ T Y P E P R O G R A M _ H A L F W O R D )  
     {  
         p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ P R O G R A M H A L F W O R D ;  
         / *   P r o g r a m   h a l f w o r d   ( 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s .   * /  
         p F l a s h . D a t a R e m a i n i n g   =   1 U ;  
     }  
     e l s e   i f ( T y p e P r o g r a m   = =   F L A S H _ T Y P E P R O G R A M _ W O R D )  
     {  
         p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ P R O G R A M W O R D ;  
         / *   P r o g r a m   w o r d   ( 3 2 - b i t   :   2 * 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s .   * /  
         p F l a s h . D a t a R e m a i n i n g   =   2 U ;  
     }  
     e l s e  
     {  
         p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ P R O G R A M D O U B L E W O R D ;  
         / *   P r o g r a m   d o u b l e   w o r d   ( 6 4 - b i t   :   4 * 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s .   * /  
         p F l a s h . D a t a R e m a i n i n g   =   4 U ;  
     }  
  
     / *   P r o g r a m   h a l f w o r d   ( 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s .   * /  
     F L A S H _ P r o g r a m _ H a l f W o r d ( A d d r e s s ,   ( u i n t 1 6 _ t ) D a t a ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   h a n d l e s   F L A S H   i n t e r r u p t   r e q u e s t .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ F L A S H _ I R Q H a n d l e r ( v o i d )  
 {  
     u i n t 3 2 _ t   a d d r e s s t m p   =   0 U ;  
      
     / *   C h e c k   F L A S H   o p e r a t i o n   e r r o r   f l a g s   * /  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ W R P E R R _ B A N K 1 )   | |   _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ P G E R R _ B A N K 1 )   | |   \  
         ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ W R P E R R _ B A N K 2 )   | |   _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ P G E R R _ B A N K 2 ) ) )  
 # e l s e  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ W R P E R R )   | | _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ P G E R R ) )  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
     {  
         / *   R e t u r n   t h e   f a u l t y   a d d r e s s   * /  
         a d d r e s s t m p   =   p F l a s h . A d d r e s s ;  
         / *   R e s e t   a d d r e s s   * /  
         p F l a s h . A d d r e s s   =   0 x F F F F F F F F U ;  
      
         / *   S a v e   t h e   E r r o r   c o d e   * /  
         F L A S H _ S e t E r r o r C o d e ( ) ;  
          
         / *   F L A S H   e r r o r   i n t e r r u p t   u s e r   c a l l b a c k   * /  
         H A L _ F L A S H _ O p e r a t i o n E r r o r C a l l b a c k ( a d d r e s s t m p ) ;  
  
         / *   S t o p   t h e   p r o c e d u r e   o n g o i n g   * /  
         p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ N O N E ;  
     }  
  
     / *   C h e c k   F L A S H   E n d   o f   O p e r a t i o n   f l a g     * /  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ E O P _ B A N K 1 ) )  
     {  
         / *   C l e a r   F L A S H   E n d   o f   O p e r a t i o n   p e n d i n g   b i t   * /  
         _ _ H A L _ F L A S H _ C L E A R _ F L A G ( F L A S H _ F L A G _ E O P _ B A N K 1 ) ;  
 # e l s e  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ E O P ) )  
     {  
         / *   C l e a r   F L A S H   E n d   o f   O p e r a t i o n   p e n d i n g   b i t   * /  
         _ _ H A L _ F L A S H _ C L E A R _ F L A G ( F L A S H _ F L A G _ E O P ) ;  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
          
         / *   P r o c e s s   c a n   c o n t i n u e   o n l y   i f   n o   e r r o r   d e t e c t e d   * /  
         i f ( p F l a s h . P r o c e d u r e O n G o i n g   ! =   F L A S H _ P R O C _ N O N E )  
         {  
             i f ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ P A G E E R A S E )  
             {  
                 / *   N b   o f   p a g e s   t o   e r a s e d   c a n   b e   d e c r e a s e d   * /  
                 p F l a s h . D a t a R e m a i n i n g - - ;  
  
                 / *   C h e c k   i f   t h e r e   a r e   s t i l l   p a g e s   t o   e r a s e   * /  
                 i f ( p F l a s h . D a t a R e m a i n i n g   ! =   0 U )  
                 {  
                     a d d r e s s t m p   =   p F l a s h . A d d r e s s ;  
                     / * I n d i c a t e   u s e r   w h i c h   s e c t o r   h a s   b e e n   e r a s e d   * /  
                     H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( a d d r e s s t m p ) ;  
  
                     / * I n c r e m e n t   s e c t o r   n u m b e r * /  
                     a d d r e s s t m p   =   p F l a s h . A d d r e s s   +   F L A S H _ P A G E _ S I Z E ;  
                     p F l a s h . A d d r e s s   =   a d d r e s s t m p ;  
  
                     / *   I f   t h e   e r a s e   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P E R   B i t   * /  
                     C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ P E R ) ;  
  
                     F L A S H _ P a g e E r a s e ( a d d r e s s t m p ) ;  
                 }  
                 e l s e  
                 {  
                     / *   N o   m o r e   p a g e s   t o   E r a s e ,   u s e r   c a l l b a c k   c a n   b e   c a l l e d .   * /  
                     / *   R e s e t   S e c t o r   a n d   s t o p   E r a s e   p a g e s   p r o c e d u r e   * /  
                     p F l a s h . A d d r e s s   =   a d d r e s s t m p   =   0 x F F F F F F F F U ;  
                     p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ N O N E ;  
                     / *   F L A S H   E O P   i n t e r r u p t   u s e r   c a l l b a c k   * /  
                     H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( a d d r e s s t m p ) ;  
                 }  
             }  
             e l s e   i f ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ M A S S E R A S E )  
             {  
                 / *   O p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   M E R   B i t   * /  
                 C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ M E R ) ;  
  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
                 / *   S t o p   M a s s   E r a s e   p r o c e d u r e   i f   n o   p e n d i n g   m a s s   e r a s e   o n   o t h e r   b a n k   * /  
                 i f   ( H A L _ I S _ B I T _ C L R ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ M E R ) )  
                 {  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
                     / *   M a s s E r a s e   e n d e d .   R e t u r n   t h e   s e l e c t e d   b a n k   * /  
                     / *   F L A S H   E O P   i n t e r r u p t   u s e r   c a l l b a c k   * /  
                     H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( 0 U ) ;  
  
                     / *   S t o p   M a s s   E r a s e   p r o c e d u r e * /  
                     p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ N O N E ;  
                 }  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
             }  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
             e l s e  
             {  
                 / *   N b   o f   1 6 - b i t   d a t a   t o   p r o g r a m   c a n   b e   d e c r e a s e d   * /  
                 p F l a s h . D a t a R e m a i n i n g - - ;  
                  
                 / *   C h e c k   i f   t h e r e   a r e   s t i l l   1 6 - b i t   d a t a   t o   p r o g r a m   * /  
                 i f ( p F l a s h . D a t a R e m a i n i n g   ! =   0 U )  
                 {  
                     / *   I n c r e m e n t   a d d r e s s   t o   1 6 - b i t   * /  
                     p F l a s h . A d d r e s s   + =   2 U ;  
                     a d d r e s s t m p   =   p F l a s h . A d d r e s s ;  
                      
                     / *   S h i f t   t o   h a v e   n e x t   1 6 - b i t   d a t a   * /  
                     p F l a s h . D a t a   =   ( p F l a s h . D a t a   > >   1 6 U ) ;  
                      
                     / *   O p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P G   B i t   * /  
                     C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ P G ) ;  
  
                     / * P r o g r a m   h a l f w o r d   ( 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s . * /  
                     F L A S H _ P r o g r a m _ H a l f W o r d ( a d d r e s s t m p ,   ( u i n t 1 6 _ t ) p F l a s h . D a t a ) ;  
                 }  
                 e l s e  
                 {  
                     / *   P r o g r a m   e n d e d .   R e t u r n   t h e   s e l e c t e d   a d d r e s s   * /  
                     / *   F L A S H   E O P   i n t e r r u p t   u s e r   c a l l b a c k   * /  
                     i f   ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ P R O G R A M H A L F W O R D )  
                     {  
                         H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( p F l a s h . A d d r e s s ) ;  
                     }  
                     e l s e   i f   ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ P R O G R A M W O R D )  
                     {  
                         H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( p F l a s h . A d d r e s s   -   2 U ) ;  
                     }  
                     e l s e    
                     {  
                         H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( p F l a s h . A d d r e s s   -   6 U ) ;  
                     }  
                  
                     / *   R e s e t   A d d r e s s   a n d   s t o p   P r o g r a m   p r o c e d u r e   * /  
                     p F l a s h . A d d r e s s   =   0 x F F F F F F F F U ;  
                     p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ N O N E ;  
                 }  
             }  
         }  
     }  
      
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     / *   C h e c k   F L A S H   E n d   o f   O p e r a t i o n   f l a g     * /  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G (   F L A S H _ F L A G _ E O P _ B A N K 2 ) )  
     {  
         / *   C l e a r   F L A S H   E n d   o f   O p e r a t i o n   p e n d i n g   b i t   * /  
         _ _ H A L _ F L A S H _ C L E A R _ F L A G ( F L A S H _ F L A G _ E O P _ B A N K 2 ) ;  
          
         / *   P r o c e s s   c a n   c o n t i n u e   o n l y   i f   n o   e r r o r   d e t e c t e d   * /  
         i f ( p F l a s h . P r o c e d u r e O n G o i n g   ! =   F L A S H _ P R O C _ N O N E )  
         {  
             i f ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ P A G E E R A S E )  
             {  
                 / *   N b   o f   p a g e s   t o   e r a s e d   c a n   b e   d e c r e a s e d   * /  
                 p F l a s h . D a t a R e m a i n i n g - - ;  
                  
                 / *   C h e c k   i f   t h e r e   a r e   s t i l l   p a g e s   t o   e r a s e * /  
                 i f ( p F l a s h . D a t a R e m a i n i n g   ! =   0 U )  
                 {  
                     / *   I n d i c a t e   u s e r   w h i c h   p a g e   a d d r e s s   h a s   b e e n   e r a s e d * /  
                     H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( p F l a s h . A d d r e s s ) ;  
                  
                     / *   I n c r e m e n t   p a g e   a d d r e s s   t o   n e x t   p a g e   * /  
                     p F l a s h . A d d r e s s   + =   F L A S H _ P A G E _ S I Z E ;  
                     a d d r e s s t m p   =   p F l a s h . A d d r e s s ;  
  
                     / *   O p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P E R   B i t   * /  
                     C L E A R _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ P E R ) ;  
  
                     F L A S H _ P a g e E r a s e ( a d d r e s s t m p ) ;  
                 }  
                 e l s e  
                 {  
                     / * N o   m o r e   p a g e s   t o   E r a s e * /  
                      
                     / * R e s e t   A d d r e s s   a n d   s t o p   E r a s e   p a g e s   p r o c e d u r e * /  
                     p F l a s h . A d d r e s s   =   0 x F F F F F F F F U ;  
                     p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ N O N E ;  
  
                     / *   F L A S H   E O P   i n t e r r u p t   u s e r   c a l l b a c k   * /  
                     H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( p F l a s h . A d d r e s s ) ;  
                 }  
             }  
             e l s e   i f ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ M A S S E R A S E )  
             {  
                 / *   O p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   M E R   B i t   * /  
                 C L E A R _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ M E R ) ;  
  
                 i f   ( H A L _ I S _ B I T _ C L R ( F L A S H - > C R ,   F L A S H _ C R _ M E R ) )  
                 {  
                     / *   M a s s E r a s e   e n d e d .   R e t u r n   t h e   s e l e c t e d   b a n k * /  
                     / *   F L A S H   E O P   i n t e r r u p t   u s e r   c a l l b a c k   * /  
                     H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( 0 U ) ;  
                  
                     p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ N O N E ;  
                 }  
             }  
             e l s e  
             {  
                 / *   N b   o f   1 6 - b i t   d a t a   t o   p r o g r a m   c a n   b e   d e c r e a s e d   * /  
                 p F l a s h . D a t a R e m a i n i n g - - ;  
                  
                 / *   C h e c k   i f   t h e r e   a r e   s t i l l   1 6 - b i t   d a t a   t o   p r o g r a m   * /  
                 i f ( p F l a s h . D a t a R e m a i n i n g   ! =   0 U )  
                 {  
                     / *   I n c r e m e n t   a d d r e s s   t o   1 6 - b i t   * /  
                     p F l a s h . A d d r e s s   + =   2 U ;  
                     a d d r e s s t m p   =   p F l a s h . A d d r e s s ;  
                      
                     / *   S h i f t   t o   h a v e   n e x t   1 6 - b i t   d a t a   * /  
                     p F l a s h . D a t a   =   ( p F l a s h . D a t a   > >   1 6 U ) ;  
                      
                     / *   O p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P G   B i t   * /  
                     C L E A R _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ P G ) ;  
  
                     / * P r o g r a m   h a l f w o r d   ( 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s . * /  
                     F L A S H _ P r o g r a m _ H a l f W o r d ( a d d r e s s t m p ,   ( u i n t 1 6 _ t ) p F l a s h . D a t a ) ;  
                 }  
                 e l s e  
                 {  
                     / * P r o g r a m   e n d e d .   R e t u r n   t h e   s e l e c t e d   a d d r e s s * /  
                     / *   F L A S H   E O P   i n t e r r u p t   u s e r   c a l l b a c k   * /  
                     i f   ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ P R O G R A M H A L F W O R D )  
                     {  
                         H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( p F l a s h . A d d r e s s ) ;  
                     }  
                     e l s e   i f   ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ P R O G R A M W O R D )  
                     {  
                         H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( p F l a s h . A d d r e s s - 2 U ) ;  
                     }  
                     e l s e    
                     {  
                         H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( p F l a s h . A d d r e s s - 6 U ) ;  
                     }  
                      
                     / *   R e s e t   A d d r e s s   a n d   s t o p   P r o g r a m   p r o c e d u r e * /  
                     p F l a s h . A d d r e s s   =   0 x F F F F F F F F U ;  
                     p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ N O N E ;  
                 }  
             }  
         }  
     }  
 # e n d i f    
  
     i f ( p F l a s h . P r o c e d u r e O n G o i n g   = =   F L A S H _ P R O C _ N O N E )  
     {  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
         / *   O p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P G ,   P E R   a n d   M E R   B i t s   f o r   b o t h   b a n k   * /  
         C L E A R _ B I T ( F L A S H - > C R ,   ( F L A S H _ C R _ P G   |   F L A S H _ C R _ P E R   |   F L A S H _ C R _ M E R ) ) ;  
         C L E A R _ B I T ( F L A S H - > C R 2 ,   ( F L A S H _ C R 2 _ P G   |   F L A S H _ C R 2 _ P E R   |   F L A S H _ C R 2 _ M E R ) ) ;      
      
         / *   D i s a b l e   E n d   o f   F L A S H   O p e r a t i o n   a n d   E r r o r   s o u r c e   i n t e r r u p t s   f o r   b o t h   b a n k s   * /  
         _ _ H A L _ F L A S H _ D I S A B L E _ I T ( F L A S H _ I T _ E O P _ B A N K 1   |   F L A S H _ I T _ E R R _ B A N K 1   |   F L A S H _ I T _ E O P _ B A N K 2   |   F L A S H _ I T _ E R R _ B A N K 2 ) ;  
 # e l s e  
         / *   O p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P G ,   P E R   a n d   M E R   B i t s   * /  
         C L E A R _ B I T ( F L A S H - > C R ,   ( F L A S H _ C R _ P G   |   F L A S H _ C R _ P E R   |   F L A S H _ C R _ M E R ) ) ;  
  
         / *   D i s a b l e   E n d   o f   F L A S H   O p e r a t i o n   a n d   E r r o r   s o u r c e   i n t e r r u p t s   * /  
         _ _ H A L _ F L A S H _ D I S A B L E _ I T ( F L A S H _ I T _ E O P   |   F L A S H _ I T _ E R R ) ;  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( & p F l a s h ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     F L A S H   e n d   o f   o p e r a t i o n   i n t e r r u p t   c a l l b a c k  
     *   @ p a r a m     R e t u r n V a l u e :   T h e   v a l u e   s a v e d   i n   t h i s   p a r a m e t e r   d e p e n d s   o n   t h e   o n g o i n g   p r o c e d u r e  
     *                                   -   M a s s   E r a s e :   N o   r e t u r n   v a l u e   e x p e c t e d  
     *                                   -   P a g e s   E r a s e :   A d d r e s s   o f   t h e   p a g e   w h i c h   h a s   b e e n   e r a s e d    
     *                                         ( i f   0 x F F F F F F F F ,   i t   m e a n s   t h a t   a l l   t h e   s e l e c t e d   p a g e s   h a v e   b e e n   e r a s e d )  
     *                                   -   P r o g r a m :   A d d r e s s   w h i c h   w a s   s e l e c t e d   f o r   d a t a   p r o g r a m  
     *   @ r e t v a l   n o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( u i n t 3 2 _ t   R e t u r n V a l u e )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( R e t u r n V a l u e ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /    
 }  
  
 / * *  
     *   @ b r i e f     F L A S H   o p e r a t i o n   e r r o r   i n t e r r u p t   c a l l b a c k  
     *   @ p a r a m     R e t u r n V a l u e :   T h e   v a l u e   s a v e d   i n   t h i s   p a r a m e t e r   d e p e n d s   o n   t h e   o n g o i n g   p r o c e d u r e  
     *                                   -   M a s s   E r a s e :   N o   r e t u r n   v a l u e   e x p e c t e d  
     *                                   -   P a g e s   E r a s e :   A d d r e s s   o f   t h e   p a g e   w h i c h   r e t u r n e d   a n   e r r o r  
     *                                   -   P r o g r a m :   A d d r e s s   w h i c h   w a s   s e l e c t e d   f o r   d a t a   p r o g r a m  
     *   @ r e t v a l   n o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ F L A S H _ O p e r a t i o n E r r o r C a l l b a c k ( u i n t 3 2 _ t   R e t u r n V a l u e )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( R e t u r n V a l u e ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ F L A S H _ O p e r a t i o n E r r o r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /    
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   F L A S H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   P e r i p h e r a l   C o n t r o l   f u n c t i o n s    
   *     @ b r i e f       m a n a g e m e n t   f u n c t i o n s    
   *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   F L A S H    
         m e m o r y   o p e r a t i o n s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     U n l o c k   t h e   F L A S H   c o n t r o l   r e g i s t e r   a c c e s s  
     *   @ r e t v a l   H A L   S t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ U n l o c k ( v o i d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f ( R E A D _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ L O C K )   ! =   R E S E T )  
     {  
         / *   A u t h o r i z e   t h e   F L A S H   R e g i s t e r s   a c c e s s   * /  
         W R I T E _ R E G ( F L A S H - > K E Y R ,   F L A S H _ K E Y 1 ) ;  
         W R I T E _ R E G ( F L A S H - > K E Y R ,   F L A S H _ K E Y 2 ) ;  
  
         / *   V e r i f y   F l a s h   i s   u n l o c k e d   * /  
         i f ( R E A D _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ L O C K )   ! =   R E S E T )  
         {  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
     }  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     i f ( R E A D _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ L O C K )   ! =   R E S E T )  
     {  
         / *   A u t h o r i z e   t h e   F L A S H   B A N K 2   R e g i s t e r s   a c c e s s   * /  
         W R I T E _ R E G ( F L A S H - > K E Y R 2 ,   F L A S H _ K E Y 1 ) ;  
         W R I T E _ R E G ( F L A S H - > K E Y R 2 ,   F L A S H _ K E Y 2 ) ;  
          
         / *   V e r i f y   F l a s h   B A N K 2   i s   u n l o c k e d   * /  
         i f ( R E A D _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ L O C K )   ! =   R E S E T )  
         {  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
     }  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     L o c k s   t h e   F L A S H   c o n t r o l   r e g i s t e r   a c c e s s  
     *   @ r e t v a l   H A L   S t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ L o c k ( v o i d )  
 {  
     / *   S e t   t h e   L O C K   B i t   t o   l o c k   t h e   F L A S H   R e g i s t e r s   a c c e s s   * /  
     S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ L O C K ) ;  
      
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     / *   S e t   t h e   L O C K   B i t   t o   l o c k   t h e   F L A S H   B A N K 2   R e g i s t e r s   a c c e s s   * /  
     S E T _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ L O C K ) ;  
  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
     r e t u r n   H A L _ O K ;      
 }  
  
 / * *  
     *   @ b r i e f     U n l o c k   t h e   F L A S H   O p t i o n   C o n t r o l   R e g i s t e r s   a c c e s s .  
     *   @ r e t v a l   H A L   S t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ O B _ U n l o c k ( v o i d )  
 {  
     i f   ( H A L _ I S _ B I T _ C L R ( F L A S H - > C R ,   F L A S H _ C R _ O P T W R E ) )  
     {  
         / *   A u t h o r i z e s   t h e   O p t i o n   B y t e   r e g i s t e r   p r o g r a m m i n g   * /  
         W R I T E _ R E G ( F L A S H - > O P T K E Y R ,   F L A S H _ O P T K E Y 1 ) ;  
         W R I T E _ R E G ( F L A S H - > O P T K E Y R ,   F L A S H _ O P T K E Y 2 ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }      
      
     r e t u r n   H A L _ O K ;      
 }  
  
 / * *  
     *   @ b r i e f     L o c k   t h e   F L A S H   O p t i o n   C o n t r o l   R e g i s t e r s   a c c e s s .  
     *   @ r e t v a l   H A L   S t a t u s    
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ O B _ L o c k ( v o i d )  
 {  
     / *   C l e a r   t h e   O P T W R E   B i t   t o   l o c k   t h e   F L A S H   O p t i o n   B y t e   R e g i s t e r s   a c c e s s   * /  
     C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T W R E ) ;  
      
     r e t u r n   H A L _ O K ;      
 }  
      
 / * *  
     *   @ b r i e f     L a u n c h   t h e   o p t i o n   b y t e   l o a d i n g .  
     *   @ n o t e       T h i s   f u n c t i o n   w i l l   r e s e t   a u t o m a t i c a l l y   t h e   M C U .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ F L A S H _ O B _ L a u n c h ( v o i d )  
 {  
     / *   I n i t i a t e s   a   s y s t e m   r e s e t   r e q u e s t   t o   l a u n c h   t h e   o p t i o n   b y t e   l o a d i n g   * /  
     H A L _ N V I C _ S y s t e m R e s e t ( ) ;  
 }  
  
 / * *  
     *   @ }  
     * /      
  
 / * *   @ d e f g r o u p   F L A S H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   e r r o r s   f u n c t i o n s    
   *     @ b r i e f         P e r i p h e r a l   e r r o r s   f u n c t i o n s    
   *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   E r r o r s   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t   t o   g e t   i n   r u n - t i m e   e r r o r s   o f     t h e   F L A S H   p e r i p h e r a l .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     G e t   t h e   s p e c i f i c   F L A S H   e r r o r   f l a g .  
     *   @ r e t v a l   F L A S H _ E r r o r C o d e   T h e   r e t u r n e d   v a l u e   c a n   b e :  
     *                         @ r e f   F L A S H _ E r r o r _ C o d e s  
     * /  
 u i n t 3 2 _ t   H A L _ F L A S H _ G e t E r r o r ( v o i d )  
 {  
       r e t u r n   p F l a s h . E r r o r C o d e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   F L A S H _ P r i v a t e _ F u n c t i o n s  
   *   @ {  
   * /  
  
 / * *  
     *   @ b r i e f     P r o g r a m   a   h a l f - w o r d   ( 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s .  
     *   @ p a r a m     A d d r e s s   s p e c i f y   t h e   a d d r e s s   t o   b e   p r o g r a m m e d .  
     *   @ p a r a m     D a t a         s p e c i f y   t h e   d a t a   t o   b e   p r o g r a m m e d .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   F L A S H _ P r o g r a m _ H a l f W o r d ( u i n t 3 2 _ t   A d d r e s s ,   u i n t 1 6 _ t   D a t a )  
 {  
     / *   C l e a n   t h e   e r r o r   c o n t e x t   * /  
     p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ;  
      
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     i f ( A d d r e s s   < =   F L A S H _ B A N K 1 _ E N D )  
     {  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
         / *   P r o c e e d   t o   p r o g r a m   t h e   n e w   d a t a   * /  
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ P G ) ;  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     }  
     e l s e  
     {  
         / *   P r o c e e d   t o   p r o g r a m   t h e   n e w   d a t a   * /  
         S E T _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ P G ) ;  
     }  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
  
     / *   W r i t e   d a t a   i n   t h e   a d d r e s s   * /  
     * ( _ _ I O   u i n t 1 6 _ t * ) A d d r e s s   =   D a t a ;  
 }  
  
 / * *  
     *   @ b r i e f     W a i t   f o r   a   F L A S H   o p e r a t i o n   t o   c o m p l e t e .  
     *   @ p a r a m     T i m e o u t     m a x i m u m   f l a s h   o p e r a t i o n   t i m e o u t  
     *   @ r e t v a l   H A L   S t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   W a i t   f o r   t h e   F L A S H   o p e r a t i o n   t o   c o m p l e t e   b y   p o l l i n g   o n   B U S Y   f l a g   t o   b e   r e s e t .  
           E v e n   i f   t h e   F L A S H   o p e r a t i o n   f a i l s ,   t h e   B U S Y   f l a g   w i l l   b e   r e s e t   a n d   a n   e r r o r  
           f l a g   w i l l   b e   s e t   * /  
            
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
            
     w h i l e ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ B S Y ) )    
     {    
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( ) - t i c k s t a r t )   >   T i m e o u t ) )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
      
     / *   C h e c k   F L A S H   E n d   o f   O p e r a t i o n   f l a g     * /  
     i f   ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ E O P ) )  
     {  
         / *   C l e a r   F L A S H   E n d   o f   O p e r a t i o n   p e n d i n g   b i t   * /  
         _ _ H A L _ F L A S H _ C L E A R _ F L A G ( F L A S H _ F L A G _ E O P ) ;  
     }  
      
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ W R P E R R )     | |    
           _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ O P T V E R R )   | |    
           _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ P G E R R ) )  
     {  
         / * S a v e   t h e   e r r o r   c o d e * /  
         F L A S H _ S e t E r r o r C o d e ( ) ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   T h e r e   i s   n o   e r r o r   f l a g   s e t   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
 / * *  
     *   @ b r i e f     W a i t   f o r   a   F L A S H   B A N K 2   o p e r a t i o n   t o   c o m p l e t e .  
     *   @ p a r a m     T i m e o u t   m a x i m u m   f l a s h   o p e r a t i o n   t i m e o u t  
     *   @ r e t v a l   H A L _ S t a t u s T y p e D e f   H A L   S t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( u i n t 3 2 _ t   T i m e o u t )  
 {    
     / *   W a i t   f o r   t h e   F L A S H   B A N K 2   o p e r a t i o n   t o   c o m p l e t e   b y   p o l l i n g   o n   B U S Y   f l a g   t o   b e   r e s e t .  
           E v e n   i f   t h e   F L A S H   B A N K 2   o p e r a t i o n   f a i l s ,   t h e   B U S Y   f l a g   w i l l   b e   r e s e t   a n d   a n   e r r o r  
           f l a g   w i l l   b e   s e t   * /  
            
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
            
     w h i l e ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ B S Y _ B A N K 2 ) )    
     {    
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( ) - t i c k s t a r t )   >   T i m e o u t ) )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
      
     / *   C h e c k   F L A S H   E n d   o f   O p e r a t i o n   f l a g     * /  
     i f   ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ E O P _ B A N K 2 ) )  
     {  
         / *   C l e a r   F L A S H   E n d   o f   O p e r a t i o n   p e n d i n g   b i t   * /  
         _ _ H A L _ F L A S H _ C L E A R _ F L A G ( F L A S H _ F L A G _ E O P _ B A N K 2 ) ;  
     }  
  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ W R P E R R _ B A N K 2 )   | |   _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ P G E R R _ B A N K 2 ) )  
     {  
         / * S a v e   t h e   e r r o r   c o d e * /  
         F L A S H _ S e t E r r o r C o d e ( ) ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   I f   t h e r e   i s   a n   e r r o r   f l a g   s e t   * /  
     r e t u r n   H A L _ O K ;  
      
 }  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
  
 / * *  
     *   @ b r i e f     S e t   t h e   s p e c i f i c   F L A S H   e r r o r   f l a g .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   F L A S H _ S e t E r r o r C o d e ( v o i d )  
 {  
     u i n t 3 2 _ t   f l a g s   =   0 U ;  
      
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ W R P E R R )   | |   _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ W R P E R R _ B A N K 2 ) )  
 # e l s e  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ W R P E R R ) )  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
     {  
         p F l a s h . E r r o r C o d e   | =   H A L _ F L A S H _ E R R O R _ W R P ;  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
         f l a g s   | =   F L A S H _ F L A G _ W R P E R R   |   F L A S H _ F L A G _ W R P E R R _ B A N K 2 ;  
 # e l s e  
         f l a g s   | =   F L A S H _ F L A G _ W R P E R R ;  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
     }  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ P G E R R )   | |   _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ P G E R R _ B A N K 2 ) )  
 # e l s e  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ P G E R R ) )  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
     {  
         p F l a s h . E r r o r C o d e   | =   H A L _ F L A S H _ E R R O R _ P R O G ;  
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D )  
         f l a g s   | =   F L A S H _ F L A G _ P G E R R   |   F L A S H _ F L A G _ P G E R R _ B A N K 2 ;  
 # e l s e  
         f l a g s   | =   F L A S H _ F L A G _ P G E R R ;  
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /  
     }  
     i f ( _ _ H A L _ F L A S H _ G E T _ F L A G ( F L A S H _ F L A G _ O P T V E R R ) )  
     {  
         p F l a s h . E r r o r C o d e   | =   H A L _ F L A S H _ E R R O R _ O P T V ;  
     _ _ H A L _ F L A S H _ C L E A R _ F L A G ( F L A S H _ F L A G _ O P T V E R R ) ;  
     }  
  
     / *   C l e a r   F L A S H   e r r o r   p e n d i n g   b i t s   * /  
     _ _ H A L _ F L A S H _ C L E A R _ F L A G ( f l a g s ) ;  
 }      
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ F L A S H _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  