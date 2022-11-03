�?/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ r t c _ e x . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   R T C   H A L   E x t e n s i o n   m o d u l e .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ R T C _ E X _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ R T C _ E X _ H  
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
 / * *   @ a d d t o g r o u p   R T C E x  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   R T C E x _ P r i v a t e _ M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R T C E x _ A l i a s _ F o r _ L e g a c y   A l i a s   d e f i n e   m a i n t a i n e d   f o r   l e g a c y  
     *   @ {  
     * /  
 # d e f i n e   H A L _ R T C E x _ T a m p e r T i m e S t a m p I R Q H a n d l e r   H A L _ R T C E x _ T a m p e r I R Q H a n d l e r  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C E x _ I S _ R T C _ D e f i n i t i o n s   P r i v a t e   m a c r o s   t o   c h e c k   i n p u t   p a r a m e t e r s  
     *   @ {  
     * /  
 # d e f i n e   I S _ R T C _ T A M P E R ( _ _ T A M P E R _ _ )   ( ( _ _ T A M P E R _ _ )   = =   R T C _ T A M P E R _ 1 )  
  
 # d e f i n e   I S _ R T C _ T A M P E R _ T R I G G E R ( _ _ T R I G G E R _ _ )     ( ( ( _ _ T R I G G E R _ _ )   = =   R T C _ T A M P E R T R I G G E R _ L O W L E V E L )   | |   \  
                                                                                           ( ( _ _ T R I G G E R _ _ )   = =   R T C _ T A M P E R T R I G G E R _ H I G H L E V E L ) )  
  
 # i f   R T C _ B K P _ N U M B E R   >   1 0 U  
 # d e f i n e   I S _ R T C _ B K P ( B K P )                                       ( ( ( B K P )   < =   ( u i n t 3 2 _ t ) R T C _ B K P _ D R 1 0 )   | |   ( ( ( B K P )   > =   ( u i n t 3 2 _ t ) R T C _ B K P _ D R 1 1 )   & &   ( ( B K P )   < =   ( u i n t 3 2 _ t ) R T C _ B K P _ D R 4 2 ) ) )  
 # e l s e  
 # d e f i n e   I S _ R T C _ B K P ( B K P )                                       ( ( B K P )   < =   ( u i n t 3 2 _ t ) R T C _ B K P _ N U M B E R )  
 # e n d i f  
 # d e f i n e   I S _ R T C _ S M O O T H _ C A L I B _ M I N U S ( _ _ V A L U E _ _ )   ( ( _ _ V A L U E _ _ )   < =   0 x 0 0 0 0 0 0 7 F U )  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C E x _ E x p o r t e d _ T y p e s   R T C E x   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     R T C   T a m p e r   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   T a m p e r ;                                             / * ! <   S p e c i f i e s   t h e   T a m p e r   P i n .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f     R T C E x _ T a m p e r _ P i n s _ D e f i n i t i o n s   * /  
  
     u i n t 3 2 _ t   T r i g g e r ;                                           / * ! <   S p e c i f i e s   t h e   T a m p e r   T r i g g e r .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f     R T C E x _ T a m p e r _ T r i g g e r _ D e f i n i t i o n s   * /  
  
 }   R T C _ T a m p e r T y p e D e f ;  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C E x _ E x p o r t e d _ C o n s t a n t s   R T C E x   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R T C E x _ T a m p e r _ P i n s _ D e f i n i t i o n s   T a m p e r   P i n s   D e f i n i t i o n s  
     *   @ {  
     * /  
 # d e f i n e   R T C _ T A M P E R _ 1                                                 B K P _ C R _ T P E                         / * ! <   S e l e c t   t a m p e r   t o   b e   e n a b l e d   ( m a i n l y   f o r   l e g a c y   p u r p o s e s )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C E x _ T a m p e r _ T r i g g e r _ D e f i n i t i o n s   T a m p e r   T r i g g e r   D e f i n i t i o n s  
     *   @ {  
     * /  
 # d e f i n e   R T C _ T A M P E R T R I G G E R _ L O W L E V E L                     B K P _ C R _ T P A L                       / * ! <   A   h i g h   l e v e l   o n   t h e   T A M P E R   p i n   r e s e t s   a l l   d a t a   b a c k u p   r e g i s t e r s   ( i f   T P E   b i t   i s   s e t )   * /  
 # d e f i n e   R T C _ T A M P E R T R I G G E R _ H I G H L E V E L                   0 x 0 0 0 0 0 0 0 0 U                       / * ! <   A   l o w   l e v e l   o n   t h e   T A M P E R   p i n   r e s e t s   a l l   d a t a   b a c k u p   r e g i s t e r s   ( i f   T P E   b i t   i s   s e t )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C E x _ B a c k u p _ R e g i s t e r s _ D e f i n i t i o n s   B a c k u p   R e g i s t e r s   D e f i n i t i o n s  
     *   @ {  
     * /  
 # i f   R T C _ B K P _ N U M B E R   >   0 U  
 # d e f i n e   R T C _ B K P _ D R 1                                                   0 x 0 0 0 0 0 0 0 1 U  
 # d e f i n e   R T C _ B K P _ D R 2                                                   0 x 0 0 0 0 0 0 0 2 U  
 # d e f i n e   R T C _ B K P _ D R 3                                                   0 x 0 0 0 0 0 0 0 3 U  
 # d e f i n e   R T C _ B K P _ D R 4                                                   0 x 0 0 0 0 0 0 0 4 U  
 # d e f i n e   R T C _ B K P _ D R 5                                                   0 x 0 0 0 0 0 0 0 5 U  
 # d e f i n e   R T C _ B K P _ D R 6                                                   0 x 0 0 0 0 0 0 0 6 U  
 # d e f i n e   R T C _ B K P _ D R 7                                                   0 x 0 0 0 0 0 0 0 7 U  
 # d e f i n e   R T C _ B K P _ D R 8                                                   0 x 0 0 0 0 0 0 0 8 U  
 # d e f i n e   R T C _ B K P _ D R 9                                                   0 x 0 0 0 0 0 0 0 9 U  
 # d e f i n e   R T C _ B K P _ D R 1 0                                                 0 x 0 0 0 0 0 0 0 A U  
 # e n d i f   / *   R T C _ B K P _ N U M B E R   >   0   * /  
  
 # i f   R T C _ B K P _ N U M B E R   >   1 0 U  
 # d e f i n e   R T C _ B K P _ D R 1 1                                                 0 x 0 0 0 0 0 0 1 0 U  
 # d e f i n e   R T C _ B K P _ D R 1 2                                                 0 x 0 0 0 0 0 0 1 1 U  
 # d e f i n e   R T C _ B K P _ D R 1 3                                                 0 x 0 0 0 0 0 0 1 2 U  
 # d e f i n e   R T C _ B K P _ D R 1 4                                                 0 x 0 0 0 0 0 0 1 3 U  
 # d e f i n e   R T C _ B K P _ D R 1 5                                                 0 x 0 0 0 0 0 0 1 4 U  
 # d e f i n e   R T C _ B K P _ D R 1 6                                                 0 x 0 0 0 0 0 0 1 5 U  
 # d e f i n e   R T C _ B K P _ D R 1 7                                                 0 x 0 0 0 0 0 0 1 6 U  
 # d e f i n e   R T C _ B K P _ D R 1 8                                                 0 x 0 0 0 0 0 0 1 7 U  
 # d e f i n e   R T C _ B K P _ D R 1 9                                                 0 x 0 0 0 0 0 0 1 8 U  
 # d e f i n e   R T C _ B K P _ D R 2 0                                                 0 x 0 0 0 0 0 0 1 9 U  
 # d e f i n e   R T C _ B K P _ D R 2 1                                                 0 x 0 0 0 0 0 0 1 A U  
 # d e f i n e   R T C _ B K P _ D R 2 2                                                 0 x 0 0 0 0 0 0 1 B U  
 # d e f i n e   R T C _ B K P _ D R 2 3                                                 0 x 0 0 0 0 0 0 1 C U  
 # d e f i n e   R T C _ B K P _ D R 2 4                                                 0 x 0 0 0 0 0 0 1 D U  
 # d e f i n e   R T C _ B K P _ D R 2 5                                                 0 x 0 0 0 0 0 0 1 E U  
 # d e f i n e   R T C _ B K P _ D R 2 6                                                 0 x 0 0 0 0 0 0 1 F U  
 # d e f i n e   R T C _ B K P _ D R 2 7                                                 0 x 0 0 0 0 0 0 2 0 U  
 # d e f i n e   R T C _ B K P _ D R 2 8                                                 0 x 0 0 0 0 0 0 2 1 U  
 # d e f i n e   R T C _ B K P _ D R 2 9                                                 0 x 0 0 0 0 0 0 2 2 U  
 # d e f i n e   R T C _ B K P _ D R 3 0                                                 0 x 0 0 0 0 0 0 2 3 U  
 # d e f i n e   R T C _ B K P _ D R 3 1                                                 0 x 0 0 0 0 0 0 2 4 U  
 # d e f i n e   R T C _ B K P _ D R 3 2                                                 0 x 0 0 0 0 0 0 2 5 U  
 # d e f i n e   R T C _ B K P _ D R 3 3                                                 0 x 0 0 0 0 0 0 2 6 U  
 # d e f i n e   R T C _ B K P _ D R 3 4                                                 0 x 0 0 0 0 0 0 2 7 U  
 # d e f i n e   R T C _ B K P _ D R 3 5                                                 0 x 0 0 0 0 0 0 2 8 U  
 # d e f i n e   R T C _ B K P _ D R 3 6                                                 0 x 0 0 0 0 0 0 2 9 U  
 # d e f i n e   R T C _ B K P _ D R 3 7                                                 0 x 0 0 0 0 0 0 2 A U  
 # d e f i n e   R T C _ B K P _ D R 3 8                                                 0 x 0 0 0 0 0 0 2 B U  
 # d e f i n e   R T C _ B K P _ D R 3 9                                                 0 x 0 0 0 0 0 0 2 C U  
 # d e f i n e   R T C _ B K P _ D R 4 0                                                 0 x 0 0 0 0 0 0 2 D U  
 # d e f i n e   R T C _ B K P _ D R 4 1                                                 0 x 0 0 0 0 0 0 2 E U  
 # d e f i n e   R T C _ B K P _ D R 4 2                                                 0 x 0 0 0 0 0 0 2 F U  
 # e n d i f   / *   R T C _ B K P _ N U M B E R   >   1 0   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C E x _ E x p o r t e d _ M a c r o s   R T C E x   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   R T C   T a m p e r   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   T a m p e r   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ I T _ T A M P 1 :   T a m p e r   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ T A M P E R _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   S E T _ B I T ( B K P - > C S R ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   R T C   T a m p e r   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   T a m p e r   i n t e r r u p t   s o u r c e s   t o   b e   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ I T _ T A M P 1 :   T a m p e r   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ T A M P E R _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )     C L E A R _ B I T ( B K P - > C S R ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   R T C   T a m p e r   i n t e r r u p t   h a s   b e e n   e n a b l e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   T a m p e r   i n t e r r u p t   s o u r c e s   t o   b e   c h e c k e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g     R T C _ I T _ T A M P 1  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ T A M P E R _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )         ( ( ( ( B K P - > C S R )   &   ( ( _ _ I N T E R R U P T _ _ ) ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   s e l e c t e d   R T C   T a m p e r ' s   f l a g   s t a t u s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   R T C   T a m p e r   F l a g   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ F L A G _ T A M P 1 F  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ T A M P E R _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )               ( ( ( ( B K P - > C S R )   &   ( _ _ F L A G _ _ ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   s e l e c t e d   R T C   T a m p e r ' s   f l a g   s t a t u s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   T a m p e r   i n t e r r u p t   s o u r c e s   t o   b e   c h e c k e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g     R T C _ I T _ T A M P 1  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ T A M P E R _ G E T _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )               ( ( ( ( B K P - > C S R )   &   ( B K P _ C S R _ T E F ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     C l e a r   t h e   R T C   T a m p e r ' s   p e n d i n g   f l a g s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   R T C   T a m p e r   F l a g   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ F L A G _ T A M P 1 F  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ T A M P E R _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )           S E T _ B I T ( B K P - > C S R ,   B K P _ C S R _ C T E   |   B K P _ C S R _ C T I )  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   R T C   S e c o n d   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   S e c o n d   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ I T _ S E C :   S e c o n d   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ S E C O N D _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )     S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   R T C   S e c o n d   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   S e c o n d   i n t e r r u p t   s o u r c e s   t o   b e   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ I T _ S E C :   S e c o n d   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ S E C O N D _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   R T C   S e c o n d   i n t e r r u p t   h a s   o c c u r r e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   S e c o n d   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ I T _ S E C :   S e c o n d   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ S E C O N D _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )             ( ( ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ) &   ( ( _ _ I N T E R R U P T _ _ ) ) ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   s e l e c t e d   R T C   S e c o n d ' s   f l a g   s t a t u s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   R T C   S e c o n d   F l a g   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ F L A G _ S E C  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ S E C O N D _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                 ( ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L )   &   ( _ _ F L A G _ _ ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     C l e a r   t h e   R T C   S e c o n d ' s   p e n d i n g   f l a g s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   R T C   S e c o n d   F l a g   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ F L A G _ S E C  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ S E C O N D _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )             ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L )   & =   ~ ( _ _ F L A G _ _ )  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   R T C   O v e r f l o w   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   O v e r f l o w   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ I T _ O W :   O v e r f l o w   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ O V E R F L O W _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )     S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   R T C   O v e r f l o w   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   O v e r f l o w   i n t e r r u p t   s o u r c e s   t o   b e   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ I T _ O W :   O v e r f l o w   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ O V E R F L O W _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   R T C   O v e r f l o w   i n t e r r u p t   h a s   o c c u r r e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   O v e r f l o w   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ I T _ O W :   O v e r f l o w   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ O V E R F L O W _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )         ( ( ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ) &   ( ( _ _ I N T E R R U P T _ _ ) ) )   )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   s e l e c t e d   R T C   O v e r f l o w ' s   f l a g   s t a t u s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   R T C   O v e r f l o w   F l a g   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ F L A G _ O W  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ O V E R F L O W _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                 ( ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L )   &   ( _ _ F L A G _ _ ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     C l e a r   t h e   R T C   O v e r f l o w ' s   p e n d i n g   f l a g s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   R T C   O v e r f l o w   F l a g   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ F L A G _ O W  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ O V E R F L O W _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )             ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L )   =   ~ ( _ _ F L A G _ _ )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   R T C E x _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / *   R T C   T a m p e r   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   R T C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ S e t T a m p e r ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ T a m p e r T y p e D e f   * s T a m p e r ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ S e t T a m p e r _ I T ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ T a m p e r T y p e D e f   * s T a m p e r ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ D e a c t i v a t e T a m p e r ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   T a m p e r ) ;  
 v o i d                             H A L _ R T C E x _ T a m p e r I R Q H a n d l e r ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 v o i d                             H A L _ R T C E x _ T a m p e r 1 E v e n t C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ P o l l F o r T a m p e r 1 E v e n t ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   T i m e o u t ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / *   R T C   S e c o n d   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   R T C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ S e t S e c o n d _ I T ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ D e a c t i v a t e S e c o n d ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 v o i d                             H A L _ R T C E x _ R T C I R Q H a n d l e r ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 v o i d                             H A L _ R T C E x _ R T C E v e n t C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 v o i d                             H A L _ R T C E x _ R T C E v e n t E r r o r C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x t e n s i o n   C o n t r o l   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   R T C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
     *   @ {  
     * /  
 v o i d                             H A L _ R T C E x _ B K U P W r i t e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   B a c k u p R e g i s t e r ,   u i n t 3 2 _ t   D a t a ) ;  
 u i n t 3 2 _ t                     H A L _ R T C E x _ B K U P R e a d ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   B a c k u p R e g i s t e r ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ S e t S m o o t h C a l i b ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   S m o o t h C a l i b P e r i o d ,   u i n t 3 2 _ t   S m o o t h C a l i b P l u s P u l s e s ,   u i n t 3 2 _ t   S m o u t h C a l i b M i n u s P u l s e s V a l u e ) ;  
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
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ R T C _ E X _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  