??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ p w r . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   P W R   L L   m o d u l e .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ L L _ P W R _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ L L _ P W R _ H  
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
 # i f   d e f i n e d ( P W R )  
  
 / * *   @ d e f g r o u p   P W R _ L L   P W R  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P W R _ L L _ E x p o r t e d _ C o n s t a n t s   P W R   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ L L _ E C _ C L E A R _ F L A G   C l e a r   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ P W R _ W r i t e R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ P W R _ C R _ C S B F                                           P W R _ C R _ C S B F                         / * ! <   C l e a r   s t a n d b y   f l a g   * /  
 # d e f i n e   L L _ P W R _ C R _ C W U F                                           P W R _ C R _ C W U F                         / * ! <   C l e a r   w a k e u p   f l a g   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ L L _ E C _ G E T _ F L A G   G e t   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ P W R _ R e a d R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ P W R _ C S R _ W U F                                           P W R _ C S R _ W U F                         / * ! <   W a k e u p   f l a g   * /  
 # d e f i n e   L L _ P W R _ C S R _ S B F                                           P W R _ C S R _ S B F                         / * ! <   S t a n d b y   f l a g   * /  
 # d e f i n e   L L _ P W R _ C S R _ P V D O                                         P W R _ C S R _ P V D O                       / * ! <   P o w e r   v o l t a g e   d e t e c t o r   o u t p u t   f l a g   * /  
 # d e f i n e   L L _ P W R _ C S R _ E W U P 1                                       P W R _ C S R _ E W U P                       / * ! <   E n a b l e   W K U P   p i n   1   * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   P W R _ L L _ E C _ M O D E _ P W R   M o d e   P o w e r  
     *   @ {  
     * /  
 # d e f i n e   L L _ P W R _ M O D E _ S T O P _ M A I N R E G U                           0 x 0 0 0 0 0 0 0 0 U                                         / * ! <   E n t e r   S t o p   m o d e   w h e n   t h e   C P U   e n t e r s   d e e p s l e e p   * /  
 # d e f i n e   L L _ P W R _ M O D E _ S T O P _ L P R E G U                               ( P W R _ C R _ L P D S )                                     / * ! <   E n t e r   S t o p   m o d e   ( w i t h   l o w   p o w e r   R e g u l a t o r   O N )   w h e n   t h e   C P U   e n t e r s   d e e p s l e e p   * /  
 # d e f i n e   L L _ P W R _ M O D E _ S T A N D B Y                                       ( P W R _ C R _ P D D S )                                     / * ! <   E n t e r   S t a n d b y   m o d e   w h e n   t h e   C P U   e n t e r s   d e e p s l e e p   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ L L _ E C _ R E G U _ M O D E _ D S _ M O D E     R e g u l a t o r   M o d e   I n   D e e p   S l e e p   M o d e  
   *   @ {  
   * /  
 # d e f i n e   L L _ P W R _ R E G U _ D S M O D E _ M A I N                 0 x 0 0 0 0 0 0 0 0 U                       / * ! <   V o l t a g e   R e g u l a t o r   i n   m a i n   m o d e   d u r i n g   d e e p s l e e p   m o d e   * /  
 # d e f i n e   L L _ P W R _ R E G U _ D S M O D E _ L O W _ P O W E R       ( P W R _ C R _ L P D S )                   / * ! <   V o l t a g e   R e g u l a t o r   i n   l o w - p o w e r   m o d e   d u r i n g   d e e p s l e e p   m o d e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ L L _ E C _ P V D L E V E L   P o w e r   V o l t a g e   D e t e c t o r   L e v e l  
     *   @ {  
     * /  
 # d e f i n e   L L _ P W R _ P V D L E V E L _ 0                                     ( P W R _ C R _ P L S _ L E V 0 )             / * ! <   V o l t a g e   t h r e s h o l d   d e t e c t e d   b y   P V D   2 . 2   V   * /  
 # d e f i n e   L L _ P W R _ P V D L E V E L _ 1                                     ( P W R _ C R _ P L S _ L E V 1 )             / * ! <   V o l t a g e   t h r e s h o l d   d e t e c t e d   b y   P V D   2 . 3   V   * /  
 # d e f i n e   L L _ P W R _ P V D L E V E L _ 2                                     ( P W R _ C R _ P L S _ L E V 2 )             / * ! <   V o l t a g e   t h r e s h o l d   d e t e c t e d   b y   P V D   2 . 4   V   * /  
 # d e f i n e   L L _ P W R _ P V D L E V E L _ 3                                     ( P W R _ C R _ P L S _ L E V 3 )             / * ! <   V o l t a g e   t h r e s h o l d   d e t e c t e d   b y   P V D   2 . 5   V   * /  
 # d e f i n e   L L _ P W R _ P V D L E V E L _ 4                                     ( P W R _ C R _ P L S _ L E V 4 )             / * ! <   V o l t a g e   t h r e s h o l d   d e t e c t e d   b y   P V D   2 . 6   V   * /  
 # d e f i n e   L L _ P W R _ P V D L E V E L _ 5                                     ( P W R _ C R _ P L S _ L E V 5 )             / * ! <   V o l t a g e   t h r e s h o l d   d e t e c t e d   b y   P V D   2 . 7   V   * /  
 # d e f i n e   L L _ P W R _ P V D L E V E L _ 6                                     ( P W R _ C R _ P L S _ L E V 6 )             / * ! <   V o l t a g e   t h r e s h o l d   d e t e c t e d   b y   P V D   2 . 8   V   * /  
 # d e f i n e   L L _ P W R _ P V D L E V E L _ 7                                     ( P W R _ C R _ P L S _ L E V 7 )             / * ! <   V o l t a g e   t h r e s h o l d   d e t e c t e d   b y   P V D   2 . 9   V   * /  
 / * *  
     *   @ }  
     * /  
 / * *   @ d e f g r o u p   P W R _ L L _ E C _ W A K E U P _ P I N     W a k e u p   P i n s  
     *   @ {  
     * /  
 # d e f i n e   L L _ P W R _ W A K E U P _ P I N 1                                   ( P W R _ C S R _ E W U P )                   / * ! <   W K U P   p i n   1   :   P A 0   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P W R _ L L _ E x p o r t e d _ M a c r o s   P W R   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ L L _ E M _ W R I T E _ R E A D   C o m m o n   w r i t e   a n d   r e a d   r e g i s t e r s   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   P W R   r e g i s t e r  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ P W R _ W r i t e R e g ( _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( P W R - > _ _ R E G _ _ ,   ( _ _ V A L U E _ _ ) )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   P W R   r e g i s t e r  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ P W R _ R e a d R e g ( _ _ R E G _ _ )   R E A D _ R E G ( P W R - > _ _ R E G _ _ )  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P W R _ L L _ E x p o r t e d _ F u n c t i o n s   P W R   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ L L _ E F _ C o n f i g u r a t i o n   C o n f i g u r a t i o n  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   a c c e s s   t o   t h e   b a c k u p   d o m a i n  
     *   @ r m t o l l   C R         D B P               L L _ P W R _ E n a b l e B k U p A c c e s s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ E n a b l e B k U p A c c e s s ( v o i d )  
 {  
     S E T _ B I T ( P W R - > C R ,   P W R _ C R _ D B P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   a c c e s s   t o   t h e   b a c k u p   d o m a i n  
     *   @ r m t o l l   C R         D B P               L L _ P W R _ D i s a b l e B k U p A c c e s s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ D i s a b l e B k U p A c c e s s ( v o i d )  
 {  
     C L E A R _ B I T ( P W R - > C R ,   P W R _ C R _ D B P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   b a c k u p   d o m a i n   i s   e n a b l e d  
     *   @ r m t o l l   C R         D B P               L L _ P W R _ I s E n a b l e d B k U p A c c e s s  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ I s E n a b l e d B k U p A c c e s s ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( P W R - > C R ,   P W R _ C R _ D B P )   = =   ( P W R _ C R _ D B P ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   v o l t a g e   R e g u l a t o r   m o d e   d u r i n g   d e e p   s l e e p   m o d e  
     *   @ r m t o l l   C R         L P D S                   L L _ P W R _ S e t R e g u l M o d e D S  
     *   @ p a r a m     R e g u l M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ R E G U _ D S M O D E _ M A I N  
     *                   @ a r g   @ r e f   L L _ P W R _ R E G U _ D S M O D E _ L O W _ P O W E R  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ S e t R e g u l M o d e D S ( u i n t 3 2 _ t   R e g u l M o d e )  
 {  
     M O D I F Y _ R E G ( P W R - > C R ,   P W R _ C R _ L P D S ,   R e g u l M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   v o l t a g e   R e g u l a t o r   m o d e   d u r i n g   d e e p   s l e e p   m o d e  
     *   @ r m t o l l   C R         L P D S                   L L _ P W R _ G e t R e g u l M o d e D S  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ R E G U _ D S M O D E _ M A I N  
     *                   @ a r g   @ r e f   L L _ P W R _ R E G U _ D S M O D E _ L O W _ P O W E R  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ G e t R e g u l M o d e D S ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( P W R - > C R ,   P W R _ C R _ L P D S ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   P o w e r   D o w n   m o d e   w h e n   C P U   e n t e r s   d e e p s l e e p  
     *   @ r m t o l l   C R         P D D S                   L L _ P W R _ S e t P o w e r M o d e \ n  
     *   @ r m t o l l   C R         L P D S                   L L _ P W R _ S e t P o w e r M o d e  
     *   @ p a r a m     P D M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ M O D E _ S T O P _ M A I N R E G U  
     *                   @ a r g   @ r e f   L L _ P W R _ M O D E _ S T O P _ L P R E G U  
     *                   @ a r g   @ r e f   L L _ P W R _ M O D E _ S T A N D B Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ S e t P o w e r M o d e ( u i n t 3 2 _ t   P D M o d e )  
 {  
     M O D I F Y _ R E G ( P W R - > C R ,   ( P W R _ C R _ P D D S |   P W R _ C R _ L P D S ) ,   P D M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P o w e r   D o w n   m o d e   w h e n   C P U   e n t e r s   d e e p s l e e p  
     *   @ r m t o l l   C R         P D D S                   L L _ P W R _ G e t P o w e r M o d e \ n  
     *   @ r m t o l l   C R         L P D S                   L L _ P W R _ G e t P o w e r M o d e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ M O D E _ S T O P _ M A I N R E G U  
     *                   @ a r g   @ r e f   L L _ P W R _ M O D E _ S T O P _ L P R E G U  
     *                   @ a r g   @ r e f   L L _ P W R _ M O D E _ S T A N D B Y  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ G e t P o w e r M o d e ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( P W R - > C R ,   ( P W R _ C R _ P D D S |   P W R _ C R _ L P D S ) ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   v o l t a g e   t h r e s h o l d   d e t e c t e d   b y   t h e   P o w e r   V o l t a g e   D e t e c t o r  
     *   @ r m t o l l   C R         P L S               L L _ P W R _ S e t P V D L e v e l  
     *   @ p a r a m     P V D L e v e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 0  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 1  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 2  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 3  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 4  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 5  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 6  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ S e t P V D L e v e l ( u i n t 3 2 _ t   P V D L e v e l )  
 {  
     M O D I F Y _ R E G ( P W R - > C R ,   P W R _ C R _ P L S ,   P V D L e v e l ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   v o l t a g e   t h r e s h o l d   d e t e c t i o n  
     *   @ r m t o l l   C R         P L S               L L _ P W R _ G e t P V D L e v e l  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 0  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 1  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 2  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 3  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 4  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 5  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 6  
     *                   @ a r g   @ r e f   L L _ P W R _ P V D L E V E L _ 7  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ G e t P V D L e v e l ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( P W R - > C R ,   P W R _ C R _ P L S ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   P o w e r   V o l t a g e   D e t e c t o r  
     *   @ r m t o l l   C R         P V D E               L L _ P W R _ E n a b l e P V D  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ E n a b l e P V D ( v o i d )  
 {  
     S E T _ B I T ( P W R - > C R ,   P W R _ C R _ P V D E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   P o w e r   V o l t a g e   D e t e c t o r  
     *   @ r m t o l l   C R         P V D E               L L _ P W R _ D i s a b l e P V D  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ D i s a b l e P V D ( v o i d )  
 {  
     C L E A R _ B I T ( P W R - > C R ,   P W R _ C R _ P V D E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   P o w e r   V o l t a g e   D e t e c t o r   i s   e n a b l e d  
     *   @ r m t o l l   C R         P V D E               L L _ P W R _ I s E n a b l e d P V D  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ I s E n a b l e d P V D ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( P W R - > C R ,   P W R _ C R _ P V D E )   = =   ( P W R _ C R _ P V D E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   W a k e U p   P I N x   f u n c t i o n a l i t y  
     *   @ r m t o l l   C S R       E W U P               L L _ P W R _ E n a b l e W a k e U p P i n  
     *   @ p a r a m     W a k e U p P i n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ W A K E U P _ P I N 1  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ E n a b l e W a k e U p P i n ( u i n t 3 2 _ t   W a k e U p P i n )  
 {  
     S E T _ B I T ( P W R - > C S R ,   W a k e U p P i n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   W a k e U p   P I N x   f u n c t i o n a l i t y  
     *   @ r m t o l l   C S R       E W U P               L L _ P W R _ D i s a b l e W a k e U p P i n  
     *   @ p a r a m     W a k e U p P i n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ W A K E U P _ P I N 1  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ D i s a b l e W a k e U p P i n ( u i n t 3 2 _ t   W a k e U p P i n )  
 {  
     C L E A R _ B I T ( P W R - > C S R ,   W a k e U p P i n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   W a k e U p   P I N x   f u n c t i o n a l i t y   i s   e n a b l e d  
     *   @ r m t o l l   C S R       E W U P               L L _ P W R _ I s E n a b l e d W a k e U p P i n  
     *   @ p a r a m     W a k e U p P i n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ P W R _ W A K E U P _ P I N 1  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ I s E n a b l e d W a k e U p P i n ( u i n t 3 2 _ t   W a k e U p P i n )  
 {  
     r e t u r n   ( R E A D _ B I T ( P W R - > C S R ,   W a k e U p P i n )   = =   ( W a k e U p P i n ) ) ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P W R _ L L _ E F _ F L A G _ M a n a g e m e n t   F L A G _ M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     G e t   W a k e - u p   F l a g  
     *   @ r m t o l l   C S R       W U F               L L _ P W R _ I s A c t i v e F l a g _ W U  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ I s A c t i v e F l a g _ W U ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( P W R - > C S R ,   P W R _ C S R _ W U F )   = =   ( P W R _ C S R _ W U F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   S t a n d b y   F l a g  
     *   @ r m t o l l   C S R       S B F               L L _ P W R _ I s A c t i v e F l a g _ S B  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ I s A c t i v e F l a g _ S B ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( P W R - > C S R ,   P W R _ C S R _ S B F )   = =   ( P W R _ C S R _ S B F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   w h e t h e r   V D D   v o l t a g e   i s   b e l o w   t h e   s e l e c t e d   P V D   t h r e s h o l d  
     *   @ r m t o l l   C S R       P V D O               L L _ P W R _ I s A c t i v e F l a g _ P V D O  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ P W R _ I s A c t i v e F l a g _ P V D O ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( P W R - > C S R ,   P W R _ C S R _ P V D O )   = =   ( P W R _ C S R _ P V D O ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   S t a n d b y   F l a g  
     *   @ r m t o l l   C R       C S B F               L L _ P W R _ C l e a r F l a g _ S B  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ C l e a r F l a g _ S B ( v o i d )  
 {  
     S E T _ B I T ( P W R - > C R ,   P W R _ C R _ C S B F ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   W a k e - u p   F l a g s  
     *   @ r m t o l l   C R       C W U F               L L _ P W R _ C l e a r F l a g _ W U  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ P W R _ C l e a r F l a g _ W U ( v o i d )  
 {  
     S E T _ B I T ( P W R - > C R ,   P W R _ C R _ C W U F ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   P W R _ L L _ E F _ I n i t   D e - i n i t i a l i z a t i o n   f u n c t i o n  
     *   @ {  
     * /  
 E r r o r S t a t u s   L L _ P W R _ D e I n i t ( v o i d ) ;  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   d e f i n e d ( P W R )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ L L _ P W R _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  