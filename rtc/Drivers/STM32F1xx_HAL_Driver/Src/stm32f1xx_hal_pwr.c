??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ p w r . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       P W R   H A L   m o d u l e   d r i v e r .  
     *  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   P o w e r   C o n t r o l l e r   ( P W R )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s    
     *  
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
 / * *   @ d e f g r o u p   P W R   P W R  
     *   @ b r i e f         P W R   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ P W R _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   P W R _ P r i v a t e _ C o n s t a n t s   P W R   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
      
 / * *   @ d e f g r o u p   P W R _ P V D _ M o d e _ M a s k   P W R   P V D   M o d e   M a s k  
     *   @ {  
     * /    
 # d e f i n e   P V D _ M O D E _ I T                               0 x 0 0 0 1 0 0 0 0 U  
 # d e f i n e   P V D _ M O D E _ E V T                             0 x 0 0 0 2 0 0 0 0 U  
 # d e f i n e   P V D _ R I S I N G _ E D G E                       0 x 0 0 0 0 0 0 0 1 U  
 # d e f i n e   P V D _ F A L L I N G _ E D G E                     0 x 0 0 0 0 0 0 0 2 U  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   P W R _ r e g i s t e r _ a l i a s _ a d d r e s s   P W R   R e g i s t e r   a l i a s   a d d r e s s  
     *   @ {  
     * /    
 / *   - - - - - - - - - - - - -   P W R   r e g i s t e r s   b i t   a d d r e s s   i n   t h e   a l i a s   r e g i o n   - - - - - - - - - - - - - - - * /  
 # d e f i n e   P W R _ O F F S E T                               ( P W R _ B A S E   -   P E R I P H _ B A S E )  
 # d e f i n e   P W R _ C R _ O F F S E T                         0 x 0 0 U  
 # d e f i n e   P W R _ C S R _ O F F S E T                       0 x 0 4 U  
 # d e f i n e   P W R _ C R _ O F F S E T _ B B                   ( P W R _ O F F S E T   +   P W R _ C R _ O F F S E T )  
 # d e f i n e   P W R _ C S R _ O F F S E T _ B B                 ( P W R _ O F F S E T   +   P W R _ C S R _ O F F S E T )  
 / * *  
     *   @ }  
     * /  
        
 / * *   @ d e f g r o u p   P W R _ C R _ r e g i s t e r _ a l i a s   P W R   C R   R e g i s t e r   a l i a s   a d d r e s s  
     *   @ {  
     * /      
 / *   - - -   C R   R e g i s t e r   - - - * /  
 / *   A l i a s   w o r d   a d d r e s s   o f   L P S D S R   b i t   * /  
 # d e f i n e   L P S D S R _ B I T _ N U M B E R                 P W R _ C R _ L P D S _ P o s  
 # d e f i n e   C R _ L P S D S R _ B B                           ( ( u i n t 3 2 _ t ) ( P E R I P H _ B B _ B A S E   +   ( P W R _ C R _ O F F S E T _ B B   *   3 2 U )   +   ( L P S D S R _ B I T _ N U M B E R   *   4 U ) ) )  
  
 / *   A l i a s   w o r d   a d d r e s s   o f   D B P   b i t   * /  
 # d e f i n e   D B P _ B I T _ N U M B E R                         P W R _ C R _ D B P _ P o s  
 # d e f i n e   C R _ D B P _ B B                                 ( ( u i n t 3 2 _ t ) ( P E R I P H _ B B _ B A S E   +   ( P W R _ C R _ O F F S E T _ B B   *   3 2 U )   +   ( D B P _ B I T _ N U M B E R   *   4 U ) ) )  
  
 / *   A l i a s   w o r d   a d d r e s s   o f   P V D E   b i t   * /  
 # d e f i n e   P V D E _ B I T _ N U M B E R                       P W R _ C R _ P V D E _ P o s  
 # d e f i n e   C R _ P V D E _ B B                               ( ( u i n t 3 2 _ t ) ( P E R I P H _ B B _ B A S E   +   ( P W R _ C R _ O F F S E T _ B B   *   3 2 U )   +   ( P V D E _ B I T _ N U M B E R   *   4 U ) ) )  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ C S R _ r e g i s t e r _ a l i a s   P W R   C S R   R e g i s t e r   a l i a s   a d d r e s s  
     *   @ {  
     * /  
  
 / *   - - -   C S R   R e g i s t e r   - - - * /  
 / *   A l i a s   w o r d   a d d r e s s   o f   E W U P 1   b i t   * /  
 # d e f i n e   C S R _ E W U P _ B B ( V A L )                   ( ( u i n t 3 2 _ t ) ( P E R I P H _ B B _ B A S E   +   ( P W R _ C S R _ O F F S E T _ B B   *   3 2 U )   +   ( P O S I T I O N _ V A L ( V A L )   *   4 U ) ) )  
 / * *  
     *   @ }  
     * /  
      
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P W R _ P r i v a t e _ F u n c t i o n s   P W R   P r i v a t e   F u n c t i o n s  
   *   b r i e f       W F E   c o r t e x   c o m m a n d   o v e r l o a d e d   f o r   H A L _ P W R _ E n t e r S T O P M o d e   u s a g e   o n l y   ( s e e   W o r k a r o u n d   s e c t i o n )  
   *   @ {  
   * /  
 s t a t i c   v o i d   P W R _ O v e r l o a d W f e ( v o i d ) ;  
  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 _ _ N O I N L I N E  
 s t a t i c   v o i d   P W R _ O v e r l o a d W f e ( v o i d )  
 {  
     _ _ a s m   v o l a t i l e (   " w f e "   ) ;  
     _ _ a s m   v o l a t i l e (   " n o p "   ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   P W R _ E x p o r t e d _ F u n c t i o n s   P W R   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s    
     *     @ b r i e f       I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             A f t e r   r e s e t ,   t h e   b a c k u p   d o m a i n   ( R T C   r e g i s t e r s ,   R T C   b a c k u p   d a t a  
             r e g i s t e r s )   i s   p r o t e c t e d   a g a i n s t   p o s s i b l e   u n w a n t e d  
             w r i t e   a c c e s s e s .  
             T o   e n a b l e   a c c e s s   t o   t h e   R T C   D o m a i n   a n d   R T C   r e g i s t e r s ,   p r o c e e d   a s   f o l l o w s :  
                 ( + )   E n a b l e   t h e   P o w e r   C o n t r o l l e r   ( P W R )   A P B 1   i n t e r f a c e   c l o c k   u s i n g   t h e  
                         _ _ H A L _ R C C _ P W R _ C L K _ E N A B L E ( )   m a c r o .  
                 ( + )   E n a b l e   a c c e s s   t o   R T C   d o m a i n   u s i n g   t h e   H A L _ P W R _ E n a b l e B k U p A c c e s s ( )   f u n c t i o n .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     D e i n i t i a l i z e s   t h e   P W R   p e r i p h e r a l   r e g i s t e r s   t o   t h e i r   d e f a u l t   r e s e t   v a l u e s .      
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ D e I n i t ( v o i d )  
 {  
     _ _ H A L _ R C C _ P W R _ F O R C E _ R E S E T ( ) ;  
     _ _ H A L _ R C C _ P W R _ R E L E A S E _ R E S E T ( ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   a c c e s s   t o   t h e   b a c k u p   d o m a i n   ( R T C   r e g i s t e r s ,   R T C  
     *                   b a c k u p   d a t a   r e g i s t e r s   ) .  
     *   @ n o t e       I f   t h e   H S E   d i v i d e d   b y   1 2 8   i s   u s e d   a s   t h e   R T C   c l o c k ,   t h e  
     *                   B a c k u p   D o m a i n   A c c e s s   s h o u l d   b e   k e p t   e n a b l e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ E n a b l e B k U p A c c e s s ( v o i d )  
 {  
     / *   E n a b l e   a c c e s s   t o   R T C   a n d   b a c k u p   r e g i s t e r s   * /  
     * ( _ _ I O   u i n t 3 2 _ t   * )   C R _ D B P _ B B   =   ( u i n t 3 2 _ t ) E N A B L E ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   a c c e s s   t o   t h e   b a c k u p   d o m a i n   ( R T C   r e g i s t e r s ,   R T C  
     *                   b a c k u p   d a t a   r e g i s t e r s ) .  
     *   @ n o t e       I f   t h e   H S E   d i v i d e d   b y   1 2 8   i s   u s e d   a s   t h e   R T C   c l o c k ,   t h e  
     *                   B a c k u p   D o m a i n   A c c e s s   s h o u l d   b e   k e p t   e n a b l e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ D i s a b l e B k U p A c c e s s ( v o i d )  
 {  
     / *   D i s a b l e   a c c e s s   t o   R T C   a n d   b a c k u p   r e g i s t e r s   * /  
     * ( _ _ I O   u i n t 3 2 _ t   * )   C R _ D B P _ B B   =   ( u i n t 3 2 _ t ) D I S A B L E ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   P e r i p h e r a l   C o n t r o l   f u n c t i o n s    
     *   @ b r i e f         L o w   P o w e r   m o d e s   c o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                   # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
            
         * * *   P V D   c o n f i g u r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   T h e   P V D   i s   u s e d   t o   m o n i t o r   t h e   V D D   p o w e r   s u p p l y   b y   c o m p a r i n g   i t   t o   a  
                     t h r e s h o l d   s e l e c t e d   b y   t h e   P V D   L e v e l   ( P L S [ 2 : 0 ]   b i t s   i n   t h e   P W R _ C R ) .  
  
             ( + )   A   P V D O   f l a g   i s   a v a i l a b l e   t o   i n d i c a t e   i f   V D D / V D D A   i s   h i g h e r   o r   l o w e r  
                     t h a n   t h e   P V D   t h r e s h o l d .   T h i s   e v e n t   i s   i n t e r n a l l y   c o n n e c t e d   t o   t h e   E X T I  
                     l i n e 1 6   a n d   c a n   g e n e r a t e   a n   i n t e r r u p t   i f   e n a b l e d .   T h i s   i s   d o n e   t h r o u g h  
                     _ _ H A L _ P V D _ E X T I _ E N A B L E _ I T ( )   m a c r o .  
             ( + )   T h e   P V D   i s   s t o p p e d   i n   S t a n d b y   m o d e .  
  
         * * *   W a k e U p   p i n   c o n f i g u r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   W a k e U p   p i n   i s   u s e d   t o   w a k e   u p   t h e   s y s t e m   f r o m   S t a n d b y   m o d e .   T h i s   p i n   i s  
                     f o r c e d   i n   i n p u t   p u l l - d o w n   c o n f i g u r a t i o n   a n d   i s   a c t i v e   o n   r i s i n g   e d g e s .  
             ( + )   T h e r e   i s   o n e   W a k e U p   p i n :  
                     W a k e U p   P i n   1   o n   P A . 0 0 .  
  
         [ . . ]  
  
         * * *   L o w   P o w e r   m o d e s   c o n f i g u r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
             T h e   d e v i c e   f e a t u r e s   3   l o w - p o w e r   m o d e s :  
             ( + )   S l e e p   m o d e :   C P U   c l o c k   o f f ,   a l l   p e r i p h e r a l s   i n c l u d i n g   C o r t e x - M 3   c o r e   p e r i p h e r a l s   l i k e    
                                             N V I C ,   S y s T i c k ,   e t c .   a r e   k e p t   r u n n i n g  
             ( + )   S t o p   m o d e :   A l l   c l o c k s   a r e   s t o p p e d  
             ( + )   S t a n d b y   m o d e :   1 . 8 V   d o m a i n   p o w e r e d   o f f  
      
      
       * * *   S l e e p   m o d e   * * *  
       = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   E n t r y :  
                     T h e   S l e e p   m o d e   i s   e n t e r e d   b y   u s i n g   t h e   H A L _ P W R _ E n t e r S L E E P M o d e ( P W R _ M A I N R E G U L A T O R _ O N ,   P W R _ S L E E P E N T R Y _ W F x )  
                             f u n c t i o n s   w i t h  
                     ( + + )   P W R _ S L E E P E N T R Y _ W F I :   e n t e r   S L E E P   m o d e   w i t h   W F I   i n s t r u c t i o n  
                     ( + + )   P W R _ S L E E P E N T R Y _ W F E :   e n t e r   S L E E P   m o d e   w i t h   W F E   i n s t r u c t i o n  
            
             ( + )   E x i t :  
                 ( + + )   W F I   e n t r y   m o d e ,   A n y   p e r i p h e r a l   i n t e r r u p t   a c k n o w l e d g e d   b y   t h e   n e s t e d   v e c t o r e d   i n t e r r u p t  
                           c o n t r o l l e r   ( N V I C )   c a n   w a k e   u p   t h e   d e v i c e   f r o m   S l e e p   m o d e .  
                 ( + + )   W F E   e n t r y   m o d e ,   A n y   w a k e u p   e v e n t   c a n   w a k e   u p   t h e   d e v i c e   f r o m   S l e e p   m o d e .  
                       ( + + + )   A n y   p e r i p h e r a l   i n t e r r u p t   w / o   N V I C   c o n f i g u r a t i o n   &   S E V O N P E N D   b i t   s e t   i n   t h e   C o r t e x   ( H A L _ P W R _ E n a b l e S E V O n P e n d )  
                       ( + + + )   A n y   E X T I   L i n e   ( I n t e r n a l   o r   E x t e r n a l )   c o n f i g u r e d   i n   E v e n t   m o d e  
  
       * * *   S t o p   m o d e   * * *  
       = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h e   S t o p   m o d e   i s   b a s e d   o n   t h e   C o r t e x - M 3   d e e p s l e e p   m o d e   c o m b i n e d   w i t h   p e r i p h e r a l  
             c l o c k   g a t i n g .   T h e   v o l t a g e   r e g u l a t o r   c a n   b e   c o n f i g u r e d   e i t h e r   i n   n o r m a l   o r   l o w - p o w e r   m o d e .  
             I n   S t o p   m o d e ,   a l l   c l o c k s   i n   t h e   1 . 8   V   d o m a i n   a r e   s t o p p e d ,   t h e   P L L ,   t h e   H S I   a n d   t h e   H S E   R C    
             o s c i l l a t o r s   a r e   d i s a b l e d .   S R A M   a n d   r e g i s t e r   c o n t e n t s   a r e   p r e s e r v e d .  
             I n   S t o p   m o d e ,   a l l   I / O   p i n s   k e e p   t h e   s a m e   s t a t e   a s   i n   R u n   m o d e .  
  
             ( + )   E n t r y :  
                       T h e   S t o p   m o d e   i s   e n t e r e d   u s i n g   t h e   H A L _ P W R _ E n t e r S T O P M o d e ( P W R _ R E G U L A T O R _ V A L U E ,   P W R _ S L E E P E N T R Y _ W F x   )  
                           f u n c t i o n   w i t h :  
                     ( + + )   P W R _ R E G U L A T O R _ V A L U E =   P W R _ M A I N R E G U L A T O R _ O N :   M a i n   r e g u l a t o r   O N .  
                     ( + + )   P W R _ R E G U L A T O R _ V A L U E =   P W R _ L O W P O W E R R E G U L A T O R _ O N :   L o w   P o w e r   r e g u l a t o r   O N .  
                     ( + + )   P W R _ S L E E P E N T R Y _ W F x =   P W R _ S L E E P E N T R Y _ W F I :   e n t e r   S T O P   m o d e   w i t h   W F I   i n s t r u c t i o n  
                     ( + + )   P W R _ S L E E P E N T R Y _ W F x =   P W R _ S L E E P E N T R Y _ W F E :   e n t e r   S T O P   m o d e   w i t h   W F E   i n s t r u c t i o n  
             ( + )   E x i t :  
                     ( + + )   W F I   e n t r y   m o d e ,   A n y   E X T I   L i n e   ( I n t e r n a l   o r   E x t e r n a l )   c o n f i g u r e d   i n   I n t e r r u p t   m o d e   w i t h   N V I C   c o n f i g u r e d  
                     ( + + )   W F E   e n t r y   m o d e ,   A n y   E X T I   L i n e   ( I n t e r n a l   o r   E x t e r n a l )   c o n f i g u r e d   i n   E v e n t   m o d e .  
  
       * * *   S t a n d b y   m o d e   * * *  
       = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
             T h e   S t a n d b y   m o d e   a l l o w s   t o   a c h i e v e   t h e   l o w e s t   p o w e r   c o n s u m p t i o n .   I t   i s   b a s e d   o n   t h e  
             C o r t e x - M 3   d e e p s l e e p   m o d e ,   w i t h   t h e   v o l t a g e   r e g u l a t o r   d i s a b l e d .   T h e   1 . 8   V   d o m a i n   i s    
             c o n s e q u e n t l y   p o w e r e d   o f f .   T h e   P L L ,   t h e   H S I   o s c i l l a t o r   a n d   t h e   H S E   o s c i l l a t o r   a r e   a l s o    
             s w i t c h e d   o f f .   S R A M   a n d   r e g i s t e r   c o n t e n t s   a r e   l o s t   e x c e p t   f o r   r e g i s t e r s   i n   t h e   B a c k u p   d o m a i n    
             a n d   S t a n d b y   c i r c u i t r y  
              
             ( + )   E n t r y :  
                 ( + + )   T h e   S t a n d b y   m o d e   i s   e n t e r e d   u s i n g   t h e   H A L _ P W R _ E n t e r S T A N D B Y M o d e ( )   f u n c t i o n .  
             ( + )   E x i t :  
                 ( + + )   W K U P   p i n   r i s i n g   e d g e ,   R T C   a l a r m   e v e n t   r i s i n g   e d g e ,   e x t e r n a l   R e s e t   i n    
                           N R S T p i n ,   I W D G   R e s e t  
  
       * * *   A u t o - w a k e u p   ( A W U )   f r o m   l o w - p o w e r   m o d e   * * *  
               = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
               [ . . ]  
                  
               ( + )   T h e   M C U   c a n   b e   w o k e n   u p   f r o m   l o w - p o w e r   m o d e   b y   a n   R T C   A l a r m   e v e n t ,    
                       w i t h o u t   d e p e n d i n g   o n   a n   e x t e r n a l   i n t e r r u p t   ( A u t o - w a k e u p   m o d e ) .  
        
               ( + )   R T C   a u t o - w a k e u p   ( A W U )   f r o m   t h e   S t o p   a n d   S t a n d b y   m o d e s  
  
                       ( + + )   T o   w a k e   u p   f r o m   t h e   S t o p   m o d e   w i t h   a n   R T C   a l a r m   e v e n t ,   i t   i s   n e c e s s a r y   t o    
                                 c o n f i g u r e   t h e   R T C   t o   g e n e r a t e   t h e   R T C   a l a r m   u s i n g   t h e   H A L _ R T C _ S e t A l a r m _ I T ( )   f u n c t i o n .  
  
       * * *   P W R   W o r k a r o u n d s   l i n k e d   t o   S i l i c o n   L i m i t a t i o n   * * *  
               = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
               [ . . ]  
               B e l o w   t h e   l i s t   o f   a l l   s i l i c o n   l i m i t a t i o n s   k n o w n   o n   S T M 3 2 F 1 x x   p r o u c t .  
  
               ( # ) W o r k a r o u n d s   I m p l e m e n t e d   i n s i d e   P W R   H A L   D r i v e r  
                     ( # # ) D e b u g g i n g   S t o p   m o d e   w i t h   W F E   e n t r y   -   o v e r l o a d e d   t h e   W F E   b y   a n   i n t e r n a l   f u n c t i o n          
                  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   v o l t a g e   t h r e s h o l d   d e t e c t e d   b y   t h e   P o w e r   V o l t a g e   D e t e c t o r ( P V D ) .  
     *   @ p a r a m     s C o n f i g P V D :   p o i n t e r   t o   a n   P W R _ P V D T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s   t h e   c o n f i g u r a t i o n  
     *                   i n f o r m a t i o n   f o r   t h e   P V D .  
     *   @ n o t e       R e f e r   t o   t h e   e l e c t r i c a l   c h a r a c t e r i s t i c s   o f   y o u r   d e v i c e   d a t a s h e e t   f o r  
     *                   m o r e   d e t a i l s   a b o u t   t h e   v o l t a g e   t h r e s h o l d   c o r r e s p o n d i n g   t o   e a c h  
     *                   d e t e c t i o n   l e v e l .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ C o n f i g P V D ( P W R _ P V D T y p e D e f   * s C o n f i g P V D )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ P W R _ P V D _ L E V E L ( s C o n f i g P V D - > P V D L e v e l ) ) ;  
     a s s e r t _ p a r a m ( I S _ P W R _ P V D _ M O D E ( s C o n f i g P V D - > M o d e ) ) ;  
  
     / *   S e t   P L S [ 7 : 5 ]   b i t s   a c c o r d i n g   t o   P V D L e v e l   v a l u e   * /  
     M O D I F Y _ R E G ( P W R - > C R ,   P W R _ C R _ P L S ,   s C o n f i g P V D - > P V D L e v e l ) ;  
      
     / *   C l e a r   a n y   p r e v i o u s   c o n f i g .   K e e p   i t   c l e a r   i f   n o   e v e n t   o r   I T   m o d e   i s   s e l e c t e d   * /  
     _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ E V E N T ( ) ;  
     _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ I T ( ) ;  
     _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ;    
     _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ;  
  
     / *   C o n f i g u r e   i n t e r r u p t   m o d e   * /  
     i f ( ( s C o n f i g P V D - > M o d e   &   P V D _ M O D E _ I T )   = =   P V D _ M O D E _ I T )  
     {  
         _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ I T ( ) ;  
     }  
      
     / *   C o n f i g u r e   e v e n t   m o d e   * /  
     i f ( ( s C o n f i g P V D - > M o d e   &   P V D _ M O D E _ E V T )   = =   P V D _ M O D E _ E V T )  
     {  
         _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ E V E N T ( ) ;  
     }  
      
     / *   C o n f i g u r e   t h e   e d g e   * /  
     i f ( ( s C o n f i g P V D - > M o d e   &   P V D _ R I S I N G _ E D G E )   = =   P V D _ R I S I N G _ E D G E )  
     {  
         _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ;  
     }  
      
     i f ( ( s C o n f i g P V D - > M o d e   &   P V D _ F A L L I N G _ E D G E )   = =   P V D _ F A L L I N G _ E D G E )  
     {  
         _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   t h e   P o w e r   V o l t a g e   D e t e c t o r ( P V D ) .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ E n a b l e P V D ( v o i d )  
 {  
     / *   E n a b l e   t h e   p o w e r   v o l t a g e   d e t e c t o r   * /  
     * ( _ _ I O   u i n t 3 2 _ t   * )   C R _ P V D E _ B B   =   ( u i n t 3 2 _ t ) E N A B L E ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   t h e   P o w e r   V o l t a g e   D e t e c t o r ( P V D ) .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ D i s a b l e P V D ( v o i d )  
 {  
     / *   D i s a b l e   t h e   p o w e r   v o l t a g e   d e t e c t o r   * /  
     * ( _ _ I O   u i n t 3 2 _ t   * )   C R _ P V D E _ B B   =   ( u i n t 3 2 _ t ) D I S A B L E ;  
 }  
  
 / * *  
     *   @ b r i e f   E n a b l e s   t h e   W a k e U p   P I N x   f u n c t i o n a l i t y .  
     *   @ p a r a m   W a k e U p P i n x :   S p e c i f i e s   t h e   P o w e r   W a k e - U p   p i n   t o   e n a b l e .  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   P W R _ W A K E U P _ P I N 1  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ E n a b l e W a k e U p P i n ( u i n t 3 2 _ t   W a k e U p P i n x )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ P W R _ W A K E U P _ P I N ( W a k e U p P i n x ) ) ;  
     / *   E n a b l e   t h e   E W U P x   p i n   * /  
     * ( _ _ I O   u i n t 3 2 _ t   * )   C S R _ E W U P _ B B ( W a k e U p P i n x )   =   ( u i n t 3 2 _ t ) E N A B L E ;  
 }  
  
 / * *  
     *   @ b r i e f   D i s a b l e s   t h e   W a k e U p   P I N x   f u n c t i o n a l i t y .  
     *   @ p a r a m   W a k e U p P i n x :   S p e c i f i e s   t h e   P o w e r   W a k e - U p   p i n   t o   d i s a b l e .  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   P W R _ W A K E U P _ P I N 1  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ D i s a b l e W a k e U p P i n ( u i n t 3 2 _ t   W a k e U p P i n x )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ P W R _ W A K E U P _ P I N ( W a k e U p P i n x ) ) ;  
     / *   D i s a b l e   t h e   E W U P x   p i n   * /  
     * ( _ _ I O   u i n t 3 2 _ t   * )   C S R _ E W U P _ B B ( W a k e U p P i n x )   =   ( u i n t 3 2 _ t ) D I S A B L E ;  
 }  
  
 / * *  
     *   @ b r i e f   E n t e r s   S l e e p   m o d e .  
     *   @ n o t e     I n   S l e e p   m o d e ,   a l l   I / O   p i n s   k e e p   t h e   s a m e   s t a t e   a s   i n   R u n   m o d e .  
     *   @ p a r a m   R e g u l a t o r :   R e g u l a t o r   s t a t e   a s   n o   e f f e c t   i n   S L E E P   m o d e   -     a l l o w s   t o   s u p p o r t   p o r t a b i l i t y   f r o m   l e g a c y   s o f t w a r e  
     *   @ p a r a m   S L E E P E n t r y :   S p e c i f i e s   i f   S L E E P   m o d e   i s   e n t e r e d   w i t h   W F I   o r   W F E   i n s t r u c t i o n .  
     *                       W h e n   W F I   e n t r y   i s   u s e d ,   t i c k   i n t e r r u p t   h a v e   t o   b e   d i s a b l e d   i f   n o t   d e s i r e d   a s    
     *                       t h e   i n t e r r u p t   w a k e   u p   s o u r c e .  
     *                       T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   P W R _ S L E E P E N T R Y _ W F I :   e n t e r   S L E E P   m o d e   w i t h   W F I   i n s t r u c t i o n  
     *                         @ a r g   P W R _ S L E E P E N T R Y _ W F E :   e n t e r   S L E E P   m o d e   w i t h   W F E   i n s t r u c t i o n  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ E n t e r S L E E P M o d e ( u i n t 3 2 _ t   R e g u l a t o r ,   u i n t 8 _ t   S L E E P E n t r y )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     / *   N o   c h e c k   o n   R e g u l a t o r   b e c a u s e   p a r a m e t e r   n o t   u s e d   i n   S L E E P   m o d e   * /  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( R e g u l a t o r ) ;  
  
     a s s e r t _ p a r a m ( I S _ P W R _ S L E E P _ E N T R Y ( S L E E P E n t r y ) ) ;  
  
     / *   C l e a r   S L E E P D E E P   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     C L E A R _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P D E E P _ M s k ) ) ;  
  
     / *   S e l e c t   S L E E P   m o d e   e n t r y   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f ( S L E E P E n t r y   = =   P W R _ S L E E P E N T R Y _ W F I )  
     {  
         / *   R e q u e s t   W a i t   F o r   I n t e r r u p t   * /  
         _ _ W F I ( ) ;  
     }  
     e l s e  
     {  
         / *   R e q u e s t   W a i t   F o r   E v e n t   * /  
         _ _ S E V ( ) ;  
         _ _ W F E ( ) ;  
         _ _ W F E ( ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   E n t e r s   S t o p   m o d e .    
     *   @ n o t e     I n   S t o p   m o d e ,   a l l   I / O   p i n s   k e e p   t h e   s a m e   s t a t e   a s   i n   R u n   m o d e .  
     *   @ n o t e     W h e n   e x i t i n g   S t o p   m o d e   b y   u s i n g   a n   i n t e r r u p t   o r   a   w a k e u p   e v e n t ,  
     *                 H S I   R C   o s c i l l a t o r   i s   s e l e c t e d   a s   s y s t e m   c l o c k .  
     *   @ n o t e     W h e n   t h e   v o l t a g e   r e g u l a t o r   o p e r a t e s   i n   l o w   p o w e r   m o d e ,   a n   a d d i t i o n a l  
     *                   s t a r t u p   d e l a y   i s   i n c u r r e d   w h e n   w a k i n g   u p   f r o m   S t o p   m o d e .    
     *                   B y   k e e p i n g   t h e   i n t e r n a l   r e g u l a t o r   O N   d u r i n g   S t o p   m o d e ,   t h e   c o n s u m p t i o n  
     *                   i s   h i g h e r   a l t h o u g h   t h e   s t a r t u p   t i m e   i s   r e d u c e d .          
     *   @ p a r a m   R e g u l a t o r :   S p e c i f i e s   t h e   r e g u l a t o r   s t a t e   i n   S t o p   m o d e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   P W R _ M A I N R E G U L A T O R _ O N :   S t o p   m o d e   w i t h   r e g u l a t o r   O N  
     *                         @ a r g   P W R _ L O W P O W E R R E G U L A T O R _ O N :   S t o p   m o d e   w i t h   l o w   p o w e r   r e g u l a t o r   O N  
     *   @ p a r a m   S T O P E n t r y :   S p e c i f i e s   i f   S t o p   m o d e   i n   e n t e r e d   w i t h   W F I   o r   W F E   i n s t r u c t i o n .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   P W R _ S T O P E N T R Y _ W F I :   E n t e r   S t o p   m o d e   w i t h   W F I   i n s t r u c t i o n  
     *                         @ a r g   P W R _ S T O P E N T R Y _ W F E :   E n t e r   S t o p   m o d e   w i t h   W F E   i n s t r u c t i o n        
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ E n t e r S T O P M o d e ( u i n t 3 2 _ t   R e g u l a t o r ,   u i n t 8 _ t   S T O P E n t r y )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ P W R _ R E G U L A T O R ( R e g u l a t o r ) ) ;  
     a s s e r t _ p a r a m ( I S _ P W R _ S T O P _ E N T R Y ( S T O P E n t r y ) ) ;  
  
     / *   C l e a r   P D D S   b i t   i n   P W R   r e g i s t e r   t o   s p e c i f y   e n t e r i n g   i n   S T O P   m o d e   w h e n   C P U   e n t e r   i n   D e e p s l e e p   * /    
     C L E A R _ B I T ( P W R - > C R ,     P W R _ C R _ P D D S ) ;  
  
     / *   S e l e c t   t h e   v o l t a g e   r e g u l a t o r   m o d e   b y   s e t t i n g   L P D S   b i t   i n   P W R   r e g i s t e r   a c c o r d i n g   t o   R e g u l a t o r   p a r a m e t e r   v a l u e   * /  
     M O D I F Y _ R E G ( P W R - > C R ,   P W R _ C R _ L P D S ,   R e g u l a t o r ) ;  
  
     / *   S e t   S L E E P D E E P   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     S E T _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P D E E P _ M s k ) ) ;  
  
     / *   S e l e c t   S t o p   m o d e   e n t r y   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f ( S T O P E n t r y   = =   P W R _ S T O P E N T R Y _ W F I )  
     {  
         / *   R e q u e s t   W a i t   F o r   I n t e r r u p t   * /  
         _ _ W F I ( ) ;  
     }  
     e l s e  
     {  
         / *   R e q u e s t   W a i t   F o r   E v e n t   * /  
         _ _ S E V ( ) ;  
         P W R _ O v e r l o a d W f e ( ) ;   / *   W F E   r e d e f i n e   l o c a l l y   * /  
         P W R _ O v e r l o a d W f e ( ) ;   / *   W F E   r e d e f i n e   l o c a l l y   * /  
     }  
     / *   R e s e t   S L E E P D E E P   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     C L E A R _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P D E E P _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f   E n t e r s   S t a n d b y   m o d e .  
     *   @ n o t e     I n   S t a n d b y   m o d e ,   a l l   I / O   p i n s   a r e   h i g h   i m p e d a n c e   e x c e p t   f o r :  
     *                     -   R e s e t   p a d   ( s t i l l   a v a i l a b l e )    
     *                     -   T A M P E R   p i n   i f   c o n f i g u r e d   f o r   t a m p e r   o r   c a l i b r a t i o n   o u t .  
     *                     -   W K U P   p i n   ( P A 0 )   i f   e n a b l e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ E n t e r S T A N D B Y M o d e ( v o i d )  
 {  
     / *   S e l e c t   S t a n d b y   m o d e   * /  
     S E T _ B I T ( P W R - > C R ,   P W R _ C R _ P D D S ) ;  
  
     / *   S e t   S L E E P D E E P   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     S E T _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P D E E P _ M s k ) ) ;  
  
     / *   T h i s   o p t i o n   i s   u s e d   t o   e n s u r e   t h a t   s t o r e   o p e r a t i o n s   a r e   c o m p l e t e d   * /  
 # i f   d e f i n e d   (   _ _ C C _ A R M )  
     _ _ f o r c e _ s t o r e s ( ) ;  
 # e n d i f  
     / *   R e q u e s t   W a i t   F o r   I n t e r r u p t   * /  
     _ _ W F I ( ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f   I n d i c a t e s   S l e e p - O n - E x i t   w h e n   r e t u r n i n g   f r o m   H a n d l e r   m o d e   t o   T h r e a d   m o d e .    
     *   @ n o t e   S e t   S L E E P O N E X I T   b i t   o f   S C R   r e g i s t e r .   W h e n   t h i s   b i t   i s   s e t ,   t h e   p r o c e s s o r    
     *               r e - e n t e r s   S L E E P   m o d e   w h e n   a n   i n t e r r u p t i o n   h a n d l i n g   i s   o v e r .  
     *               S e t t i n g   t h i s   b i t   i s   u s e f u l   w h e n   t h e   p r o c e s s o r   i s   e x p e c t e d   t o   r u n   o n l y   o n  
     *               i n t e r r u p t i o n s   h a n d l i n g .                    
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ E n a b l e S l e e p O n E x i t ( v o i d )  
 {  
     / *   S e t   S L E E P O N E X I T   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     S E T _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P O N E X I T _ M s k ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f   D i s a b l e s   S l e e p - O n - E x i t   f e a t u r e   w h e n   r e t u r n i n g   f r o m   H a n d l e r   m o d e   t o   T h r e a d   m o d e .    
     *   @ n o t e   C l e a r s   S L E E P O N E X I T   b i t   o f   S C R   r e g i s t e r .   W h e n   t h i s   b i t   i s   s e t ,   t h e   p r o c e s s o r    
     *               r e - e n t e r s   S L E E P   m o d e   w h e n   a n   i n t e r r u p t i o n   h a n d l i n g   i s   o v e r .                      
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ D i s a b l e S l e e p O n E x i t ( v o i d )  
 {  
     / *   C l e a r   S L E E P O N E X I T   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     C L E A R _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P O N E X I T _ M s k ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f   E n a b l e s   C O R T E X   M 3   S E V O N P E N D   b i t .    
     *   @ n o t e   S e t s   S E V O N P E N D   b i t   o f   S C R   r e g i s t e r .   W h e n   t h i s   b i t   i s   s e t ,   t h i s   c a u s e s    
     *               W F E   t o   w a k e   u p   w h e n   a n   i n t e r r u p t   m o v e s   f r o m   i n a c t i v e   t o   p e n d e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ E n a b l e S E V O n P e n d ( v o i d )  
 {  
     / *   S e t   S E V O N P E N D   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     S E T _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S E V O N P E N D _ M s k ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f   D i s a b l e s   C O R T E X   M 3   S E V O N P E N D   b i t .    
     *   @ n o t e   C l e a r s   S E V O N P E N D   b i t   o f   S C R   r e g i s t e r .   W h e n   t h i s   b i t   i s   s e t ,   t h i s   c a u s e s    
     *               W F E   t o   w a k e   u p   w h e n   a n   i n t e r r u p t   m o v e s   f r o m   i n a c t i v e   t o   p e n d e d .                    
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ D i s a b l e S E V O n P e n d ( v o i d )  
 {  
     / *   C l e a r   S E V O N P E N D   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     C L E A R _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S E V O N P E N D _ M s k ) ) ;  
 }  
  
  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   t h e   P W R   P V D   i n t e r r u p t   r e q u e s t .  
     *   @ n o t e       T h i s   A P I   s h o u l d   b e   c a l l e d   u n d e r   t h e   P V D _ I R Q H a n d l e r ( ) .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ P W R _ P V D _ I R Q H a n d l e r ( v o i d )  
 {  
     / *   C h e c k   P W R   e x t i   f l a g   * /  
     i f ( _ _ H A L _ P W R _ P V D _ E X T I _ G E T _ F L A G ( )   ! =   R E S E T )  
     {  
         / *   P W R   P V D   i n t e r r u p t   u s e r   c a l l b a c k   * /  
         H A L _ P W R _ P V D C a l l b a c k ( ) ;  
  
         / *   C l e a r   P W R   E x t i   p e n d i n g   b i t   * /  
         _ _ H A L _ P W R _ P V D _ E X T I _ C L E A R _ F L A G ( ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     P W R   P V D   i n t e r r u p t   c a l l b a c k  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P W R _ P V D C a l l b a c k ( v o i d )  
 {  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P W R _ P V D C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /    
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
 # e n d i f   / *   H A L _ P W R _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  