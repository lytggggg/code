�?/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ d m a . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   D M A   H A L   m o d u l e .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ D M A _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ D M A _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
   e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   D M A  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D M A _ E x p o r t e d _ T y p e s   D M A   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     D M A   C o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   D i r e c t i o n ;                                   / * ! <   S p e c i f i e s   i f   t h e   d a t a   w i l l   b e   t r a n s f e r r e d   f r o m   m e m o r y   t o   p e r i p h e r a l ,    
                                                                                       f r o m   m e m o r y   t o   m e m o r y   o r   f r o m   p e r i p h e r a l   t o   m e m o r y .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ D a t a _ t r a n s f e r _ d i r e c t i o n   * /  
  
     u i n t 3 2 _ t   P e r i p h I n c ;                                   / * ! <   S p e c i f i e s   w h e t h e r   t h e   P e r i p h e r a l   a d d r e s s   r e g i s t e r   s h o u l d   b e   i n c r e m e n t e d   o r   n o t .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ P e r i p h e r a l _ i n c r e m e n t e d _ m o d e   * /  
  
     u i n t 3 2 _ t   M e m I n c ;                                         / * ! <   S p e c i f i e s   w h e t h e r   t h e   m e m o r y   a d d r e s s   r e g i s t e r   s h o u l d   b e   i n c r e m e n t e d   o r   n o t .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ M e m o r y _ i n c r e m e n t e d _ m o d e   * /  
  
     u i n t 3 2 _ t   P e r i p h D a t a A l i g n m e n t ;               / * ! <   S p e c i f i e s   t h e   P e r i p h e r a l   d a t a   w i d t h .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ P e r i p h e r a l _ d a t a _ s i z e   * /  
  
     u i n t 3 2 _ t   M e m D a t a A l i g n m e n t ;                     / * ! <   S p e c i f i e s   t h e   M e m o r y   d a t a   w i d t h .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ M e m o r y _ d a t a _ s i z e   * /  
  
     u i n t 3 2 _ t   M o d e ;                                             / * ! <   S p e c i f i e s   t h e   o p e r a t i o n   m o d e   o f   t h e   D M A y   C h a n n e l x .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ m o d e  
                                                                                       @ n o t e   T h e   c i r c u l a r   b u f f e r   m o d e   c a n n o t   b e   u s e d   i f   t h e   m e m o r y - t o - m e m o r y  
                                                                                                   d a t a   t r a n s f e r   i s   c o n f i g u r e d   o n   t h e   s e l e c t e d   C h a n n e l   * /  
  
     u i n t 3 2 _ t   P r i o r i t y ;                                     / * ! <   S p e c i f i e s   t h e   s o f t w a r e   p r i o r i t y   f o r   t h e   D M A y   C h a n n e l x .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ P r i o r i t y _ l e v e l   * /  
 }   D M A _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   D M A   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ D M A _ S T A T E _ R E S E T                           =   0 x 0 0 U ,     / * ! <   D M A   n o t   y e t   i n i t i a l i z e d   o r   d i s a b l e d         * /  
     H A L _ D M A _ S T A T E _ R E A D Y                           =   0 x 0 1 U ,     / * ! <   D M A   i n i t i a l i z e d   a n d   r e a d y   f o r   u s e             * /  
     H A L _ D M A _ S T A T E _ B U S Y                             =   0 x 0 2 U ,     / * ! <   D M A   p r o c e s s   i s   o n g o i n g                                   * /  
     H A L _ D M A _ S T A T E _ T I M E O U T                       =   0 x 0 3 U       / * ! <   D M A   t i m e o u t   s t a t e                                             * /  
 } H A L _ D M A _ S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   D M A   E r r o r   C o d e   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ D M A _ F U L L _ T R A N S F E R                       =   0 x 0 0 U ,         / * ! <   F u l l   t r a n s f e r           * /  
     H A L _ D M A _ H A L F _ T R A N S F E R                       =   0 x 0 1 U           / * ! <   H a l f   T r a n s f e r           * /  
 } H A L _ D M A _ L e v e l C o m p l e t e T y p e D e f ;  
  
 / * *    
     *   @ b r i e f     H A L   D M A   C a l l b a c k   I D   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ D M A _ X F E R _ C P L T _ C B _ I D                     =   0 x 0 0 U ,         / * ! <   F u l l   t r a n s f e r           * /  
     H A L _ D M A _ X F E R _ H A L F C P L T _ C B _ I D             =   0 x 0 1 U ,         / * ! <   H a l f   t r a n s f e r           * /  
     H A L _ D M A _ X F E R _ E R R O R _ C B _ I D                   =   0 x 0 2 U ,         / * ! <   E r r o r                           * /    
     H A L _ D M A _ X F E R _ A B O R T _ C B _ I D                   =   0 x 0 3 U ,         / * ! <   A b o r t                           * /    
     H A L _ D M A _ X F E R _ A L L _ C B _ I D                       =   0 x 0 4 U           / * ! <   A l l                               * /    
          
 } H A L _ D M A _ C a l l b a c k I D T y p e D e f ;  
  
 / * *    
     *   @ b r i e f     D M A   h a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t   _ _ D M A _ H a n d l e T y p e D e f  
 {  
     D M A _ C h a n n e l _ T y p e D e f       * I n s t a n c e ;                                               / * ! <   R e g i s t e r   b a s e   a d d r e s s                                     * /  
      
     D M A _ I n i t T y p e D e f               I n i t ;                                                         / * ! <   D M A   c o m m u n i c a t i o n   p a r a m e t e r s                       * /    
      
     H A L _ L o c k T y p e D e f               L o c k ;                                                         / * ! <   D M A   l o c k i n g   o b j e c t                                           * /      
      
     H A L _ D M A _ S t a t e T y p e D e f     S t a t e ;                                                       / * ! <   D M A   t r a n s f e r   s t a t e                                           * /  
      
     v o i d                                     * P a r e n t ;                                                                                                             / * ! <   P a r e n t   o b j e c t   s t a t e                                         * /      
      
     v o i d                                     ( *   X f e r C p l t C a l l b a c k ) (   s t r u c t   _ _ D M A _ H a n d l e T y p e D e f   *   h d m a ) ;           / * ! <   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k                   * /  
      
     v o i d                                     ( *   X f e r H a l f C p l t C a l l b a c k ) (   s t r u c t   _ _ D M A _ H a n d l e T y p e D e f   *   h d m a ) ;   / * ! <   D M A   H a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k         * /  
      
     v o i d                                     ( *   X f e r E r r o r C a l l b a c k ) (   s t r u c t   _ _ D M A _ H a n d l e T y p e D e f   *   h d m a ) ;         / * ! <   D M A   t r a n s f e r   e r r o r   c a l l b a c k                         * /  
  
     v o i d                                     ( *   X f e r A b o r t C a l l b a c k ) (   s t r u c t   _ _ D M A _ H a n d l e T y p e D e f   *   h d m a ) ;         / * ! <   D M A   t r a n s f e r   a b o r t   c a l l b a c k                         * /      
      
     _ _ I O   u i n t 3 2 _ t                   E r r o r C o d e ;                                                                                                         / * ! <   D M A   E r r o r   c o d e                                                   * /  
  
     D M A _ T y p e D e f                         * D m a B a s e A d d r e s s ;                                                                                           / * ! <   D M A   C h a n n e l   B a s e   A d d r e s s                               * /  
      
     u i n t 3 2 _ t                               C h a n n e l I n d e x ;                                                                                                 / * ! <   D M A   C h a n n e l   I n d e x                                             * /      
  
 }   D M A _ H a n d l e T y p e D e f ;          
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D M A _ E x p o r t e d _ C o n s t a n t s   D M A   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ E r r o r _ C o d e   D M A   E r r o r   C o d e  
     *   @ {  
     * /  
 # d e f i n e   H A L _ D M A _ E R R O R _ N O N E                                           0 x 0 0 0 0 0 0 0 0 U         / * ! <   N o   e r r o r                           * /  
 # d e f i n e   H A L _ D M A _ E R R O R _ T E                                               0 x 0 0 0 0 0 0 0 1 U         / * ! <   T r a n s f e r   e r r o r               * /  
 # d e f i n e   H A L _ D M A _ E R R O R _ N O _ X F E R                                     0 x 0 0 0 0 0 0 0 4 U         / * ! <   n o   o n g o i n g   t r a n s f e r     * /  
 # d e f i n e   H A L _ D M A _ E R R O R _ T I M E O U T                                     0 x 0 0 0 0 0 0 2 0 U         / * ! <   T i m e o u t   e r r o r                 * /  
 # d e f i n e   H A L _ D M A _ E R R O R _ N O T _ S U P P O R T E D                         0 x 0 0 0 0 0 1 0 0 U         / * ! <   N o t   s u p p o r t e d   m o d e                                         * /    
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ D a t a _ t r a n s f e r _ d i r e c t i o n   D M A   D a t a   t r a n s f e r   d i r e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   D M A _ P E R I P H _ T O _ M E M O R Y                   0 x 0 0 0 0 0 0 0 0 U                                   / * ! <   P e r i p h e r a l   t o   m e m o r y   d i r e c t i o n   * /  
 # d e f i n e   D M A _ M E M O R Y _ T O _ P E R I P H                   ( ( u i n t 3 2 _ t ) D M A _ C C R _ D I R )           / * ! <   M e m o r y   t o   p e r i p h e r a l   d i r e c t i o n   * /  
 # d e f i n e   D M A _ M E M O R Y _ T O _ M E M O R Y                   ( ( u i n t 3 2 _ t ) D M A _ C C R _ M E M 2 M E M )   / * ! <   M e m o r y   t o   m e m o r y   d i r e c t i o n           * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ P e r i p h e r a l _ i n c r e m e n t e d _ m o d e   D M A   P e r i p h e r a l   i n c r e m e n t e d   m o d e  
     *   @ {  
     * /  
 # d e f i n e   D M A _ P I N C _ E N A B L E                 ( ( u i n t 3 2 _ t ) D M A _ C C R _ P I N C )     / * ! <   P e r i p h e r a l   i n c r e m e n t   m o d e   E n a b l e   * /  
 # d e f i n e   D M A _ P I N C _ D I S A B L E               0 x 0 0 0 0 0 0 0 0 U                               / * ! <   P e r i p h e r a l   i n c r e m e n t   m o d e   D i s a b l e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ M e m o r y _ i n c r e m e n t e d _ m o d e   D M A   M e m o r y   i n c r e m e n t e d   m o d e  
     *   @ {  
     * /  
 # d e f i n e   D M A _ M I N C _ E N A B L E                   ( ( u i n t 3 2 _ t ) D M A _ C C R _ M I N C )     / * ! <   M e m o r y   i n c r e m e n t   m o d e   E n a b l e     * /  
 # d e f i n e   D M A _ M I N C _ D I S A B L E                 0 x 0 0 0 0 0 0 0 0 U                               / * ! <   M e m o r y   i n c r e m e n t   m o d e   D i s a b l e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ P e r i p h e r a l _ d a t a _ s i z e   D M A   P e r i p h e r a l   d a t a   s i z e  
     *   @ {  
     * /  
 # d e f i n e   D M A _ P D A T A A L I G N _ B Y T E                     0 x 0 0 0 0 0 0 0 0 U                                     / * ! <   P e r i p h e r a l   d a t a   a l i g n m e n t :   B y t e           * /  
 # d e f i n e   D M A _ P D A T A A L I G N _ H A L F W O R D             ( ( u i n t 3 2 _ t ) D M A _ C C R _ P S I Z E _ 0 )     / * ! <   P e r i p h e r a l   d a t a   a l i g n m e n t :   H a l f W o r d   * /  
 # d e f i n e   D M A _ P D A T A A L I G N _ W O R D                     ( ( u i n t 3 2 _ t ) D M A _ C C R _ P S I Z E _ 1 )     / * ! <   P e r i p h e r a l   d a t a   a l i g n m e n t :   W o r d           * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ M e m o r y _ d a t a _ s i z e   D M A   M e m o r y   d a t a   s i z e  
     *   @ {  
     * /  
 # d e f i n e   D M A _ M D A T A A L I G N _ B Y T E                     0 x 0 0 0 0 0 0 0 0 U                                     / * ! <   M e m o r y   d a t a   a l i g n m e n t :   B y t e           * /  
 # d e f i n e   D M A _ M D A T A A L I G N _ H A L F W O R D             ( ( u i n t 3 2 _ t ) D M A _ C C R _ M S I Z E _ 0 )     / * ! <   M e m o r y   d a t a   a l i g n m e n t :   H a l f W o r d   * /  
 # d e f i n e   D M A _ M D A T A A L I G N _ W O R D                     ( ( u i n t 3 2 _ t ) D M A _ C C R _ M S I Z E _ 1 )     / * ! <   M e m o r y   d a t a   a l i g n m e n t :   W o r d           * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ m o d e   D M A   m o d e  
     *   @ {  
     * /  
 # d e f i n e   D M A _ N O R M A L                   0 x 0 0 0 0 0 0 0 0 U                                     / * ! <   N o r m a l   m o d e                                     * /  
 # d e f i n e   D M A _ C I R C U L A R               ( ( u i n t 3 2 _ t ) D M A _ C C R _ C I R C )           / * ! <   C i r c u l a r   m o d e                                 * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ P r i o r i t y _ l e v e l   D M A   P r i o r i t y   l e v e l  
     *   @ {  
     * /  
 # d e f i n e   D M A _ P R I O R I T Y _ L O W                           0 x 0 0 0 0 0 0 0 0 U                               / * ! <   P r i o r i t y   l e v e l   :   L o w               * /  
 # d e f i n e   D M A _ P R I O R I T Y _ M E D I U M                     ( ( u i n t 3 2 _ t ) D M A _ C C R _ P L _ 0 )     / * ! <   P r i o r i t y   l e v e l   :   M e d i u m         * /  
 # d e f i n e   D M A _ P R I O R I T Y _ H I G H                         ( ( u i n t 3 2 _ t ) D M A _ C C R _ P L _ 1 )     / * ! <   P r i o r i t y   l e v e l   :   H i g h             * /  
 # d e f i n e   D M A _ P R I O R I T Y _ V E R Y _ H I G H               ( ( u i n t 3 2 _ t ) D M A _ C C R _ P L )         / * ! <   P r i o r i t y   l e v e l   :   V e r y _ H i g h   * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   D M A _ i n t e r r u p t _ e n a b l e _ d e f i n i t i o n s   D M A   i n t e r r u p t   e n a b l e   d e f i n i t i o n s  
     *   @ {  
     * /  
 # d e f i n e   D M A _ I T _ T C                                                   ( ( u i n t 3 2 _ t ) D M A _ C C R _ T C I E )  
 # d e f i n e   D M A _ I T _ H T                                                   ( ( u i n t 3 2 _ t ) D M A _ C C R _ H T I E )  
 # d e f i n e   D M A _ I T _ T E                                                   ( ( u i n t 3 2 _ t ) D M A _ C C R _ T E I E )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ f l a g _ d e f i n i t i o n s   D M A   f l a g   d e f i n i t i o n s  
     *   @ {  
     * /  
 # d e f i n e   D M A _ F L A G _ G L 1                                             0 x 0 0 0 0 0 0 0 1 U  
 # d e f i n e   D M A _ F L A G _ T C 1                                             0 x 0 0 0 0 0 0 0 2 U  
 # d e f i n e   D M A _ F L A G _ H T 1                                             0 x 0 0 0 0 0 0 0 4 U  
 # d e f i n e   D M A _ F L A G _ T E 1                                             0 x 0 0 0 0 0 0 0 8 U  
 # d e f i n e   D M A _ F L A G _ G L 2                                             0 x 0 0 0 0 0 0 1 0 U  
 # d e f i n e   D M A _ F L A G _ T C 2                                             0 x 0 0 0 0 0 0 2 0 U  
 # d e f i n e   D M A _ F L A G _ H T 2                                             0 x 0 0 0 0 0 0 4 0 U  
 # d e f i n e   D M A _ F L A G _ T E 2                                             0 x 0 0 0 0 0 0 8 0 U  
 # d e f i n e   D M A _ F L A G _ G L 3                                             0 x 0 0 0 0 0 1 0 0 U  
 # d e f i n e   D M A _ F L A G _ T C 3                                             0 x 0 0 0 0 0 2 0 0 U  
 # d e f i n e   D M A _ F L A G _ H T 3                                             0 x 0 0 0 0 0 4 0 0 U  
 # d e f i n e   D M A _ F L A G _ T E 3                                             0 x 0 0 0 0 0 8 0 0 U  
 # d e f i n e   D M A _ F L A G _ G L 4                                             0 x 0 0 0 0 1 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ T C 4                                             0 x 0 0 0 0 2 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ H T 4                                             0 x 0 0 0 0 4 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ T E 4                                             0 x 0 0 0 0 8 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ G L 5                                             0 x 0 0 0 1 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ T C 5                                             0 x 0 0 0 2 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ H T 5                                             0 x 0 0 0 4 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ T E 5                                             0 x 0 0 0 8 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ G L 6                                             0 x 0 0 1 0 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ T C 6                                             0 x 0 0 2 0 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ H T 6                                             0 x 0 0 4 0 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ T E 6                                             0 x 0 0 8 0 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ G L 7                                             0 x 0 1 0 0 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ T C 7                                             0 x 0 2 0 0 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ H T 7                                             0 x 0 4 0 0 0 0 0 0 U  
 # d e f i n e   D M A _ F L A G _ T E 7                                             0 x 0 8 0 0 0 0 0 0 U  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   D M A _ E x p o r t e d _ M a c r o s   D M A   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f     R e s e t   D M A   h a n d l e   s t a t e .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D M A _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ D M A _ S T A T E _ R E S E T )  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D M A _ E N A B L E ( _ _ H A N D L E _ _ )                 ( S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R ,   D M A _ C C R _ E N ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D M A _ D I S A B L E ( _ _ H A N D L E _ _ )               ( C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R ,   D M A _ C C R _ E N ) )  
  
  
 / *   I n t e r r u p t   &   F l a g   m a n a g e m e n t   * /  
  
 / * *  
     *   @ b r i e f     E n a b l e s   t h e   s p e c i f i e d   D M A   C h a n n e l   i n t e r r u p t s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   D M A   h a n d l e  
     *   @ p a r a m   _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   D M A   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D M A _ I T _ T C :     T r a n s f e r   c o m p l e t e   i n t e r r u p t   m a s k  
     *                         @ a r g   D M A _ I T _ H T :     H a l f   t r a n s f e r   c o m p l e t e   i n t e r r u p t   m a s k  
     *                         @ a r g   D M A _ I T _ T E :     T r a n s f e r   e r r o r   i n t e r r u p t   m a s k  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D M A _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )       ( S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R ,   ( _ _ I N T E R R U P T _ _ ) ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   s p e c i f i e d   D M A   C h a n n e l   i n t e r r u p t s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   D M A   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   D M A   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D M A _ I T _ T C :     T r a n s f e r   c o m p l e t e   i n t e r r u p t   m a s k  
     *                         @ a r g   D M A _ I T _ H T :     H a l f   t r a n s f e r   c o m p l e t e   i n t e r r u p t   m a s k  
     *                         @ a r g   D M A _ I T _ T E :     T r a n s f e r   e r r o r   i n t e r r u p t   m a s k  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D M A _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )     ( C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R   ,   ( _ _ I N T E R R U P T _ _ ) ) )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   D M A   C h a n n e l   i n t e r r u p t   i s   e n a b l e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   D M A   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   D M A   i n t e r r u p t   s o u r c e   t o   c h e c k .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D M A _ I T _ T C :     T r a n s f e r   c o m p l e t e   i n t e r r u p t   m a s k  
     *                         @ a r g   D M A _ I T _ H T :     H a l f   t r a n s f e r   c o m p l e t e   i n t e r r u p t   m a s k  
     *                         @ a r g   D M A _ I T _ T E :     T r a n s f e r   e r r o r   i n t e r r u p t   m a s k  
     *   @ r e t v a l   T h e   s t a t e   o f   D M A _ I T   ( S E T   o r   R E S E T ) .  
     * /  
 # d e f i n e   _ _ H A L _ D M A _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )     ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C C R   &   ( _ _ I N T E R R U P T _ _ ) )   = =   ( _ _ I N T E R R U P T _ _ ) )   ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   n u m b e r   o f   r e m a i n i n g   d a t a   u n i t s   i n   t h e   c u r r e n t   D M A   C h a n n e l   t r a n s f e r .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   D M A   h a n d l e  
     *   @ r e t v a l   T h e   n u m b e r   o f   r e m a i n i n g   d a t a   u n i t s   i n   t h e   c u r r e n t   D M A   C h a n n e l   t r a n s f e r .  
     * /  
 # d e f i n e   _ _ H A L _ D M A _ G E T _ C O U N T E R ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C N D T R )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   I n c l u d e   D M A   H A L   E x t e n s i o n   m o d u l e   * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d m a _ e x . h "        
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   D M A _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   D M A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ I n i t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ D e I n i t   ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   D M A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 / *   I O   o p e r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ S t a r t   ( D M A _ H a n d l e T y p e D e f   * h d m a ,   u i n t 3 2 _ t   S r c A d d r e s s ,   u i n t 3 2 _ t   D s t A d d r e s s ,   u i n t 3 2 _ t   D a t a L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ S t a r t _ I T ( D M A _ H a n d l e T y p e D e f   * h d m a ,   u i n t 3 2 _ t   S r c A d d r e s s ,   u i n t 3 2 _ t   D s t A d d r e s s ,   u i n t 3 2 _ t   D a t a L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ A b o r t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ A b o r t _ I T ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ P o l l F o r T r a n s f e r ( D M A _ H a n d l e T y p e D e f   * h d m a ,   u i n t 3 2 _ t   C o m p l e t e L e v e l ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 v o i d   H A L _ D M A _ I R Q H a n d l e r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ R e g i s t e r C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ,   H A L _ D M A _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   v o i d   ( *   p C a l l b a c k ) (   D M A _ H a n d l e T y p e D e f   *   _ h d m a ) ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ U n R e g i s t e r C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ,   H A L _ D M A _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   D M A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
     *   @ {  
     * /  
 / *   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ D M A _ S t a t e T y p e D e f   H A L _ D M A _ G e t S t a t e ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 u i n t 3 2 _ t   H A L _ D M A _ G e t E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   D M A _ P r i v a t e _ M a c r o s   D M A   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
  
 # d e f i n e   I S _ D M A _ D I R E C T I O N ( D I R E C T I O N )   ( ( ( D I R E C T I O N )   = =   D M A _ P E R I P H _ T O _ M E M O R Y   )   | |   \  
                                                                           ( ( D I R E C T I O N )   = =   D M A _ M E M O R Y _ T O _ P E R I P H )     | |   \  
                                                                           ( ( D I R E C T I O N )   = =   D M A _ M E M O R Y _ T O _ M E M O R Y ) )  
  
 # d e f i n e   I S _ D M A _ B U F F E R _ S I Z E ( S I Z E )   ( ( ( S I Z E )   > =   0 x 1 U )   & &   ( ( S I Z E )   <   0 x 1 0 0 0 0 U ) )  
  
 # d e f i n e   I S _ D M A _ P E R I P H E R A L _ I N C _ S T A T E ( S T A T E )   ( ( ( S T A T E )   = =   D M A _ P I N C _ E N A B L E )   | |   \  
                                                                                         ( ( S T A T E )   = =   D M A _ P I N C _ D I S A B L E ) )  
  
 # d e f i n e   I S _ D M A _ M E M O R Y _ I N C _ S T A T E ( S T A T E )   ( ( ( S T A T E )   = =   D M A _ M I N C _ E N A B L E )     | |   \  
                                                                                 ( ( S T A T E )   = =   D M A _ M I N C _ D I S A B L E ) )  
  
 # d e f i n e   I S _ D M A _ P E R I P H E R A L _ D A T A _ S I Z E ( S I Z E )   ( ( ( S I Z E )   = =   D M A _ P D A T A A L I G N _ B Y T E )           | |   \  
                                                                                       ( ( S I Z E )   = =   D M A _ P D A T A A L I G N _ H A L F W O R D )   | |   \  
                                                                                       ( ( S I Z E )   = =   D M A _ P D A T A A L I G N _ W O R D ) )  
  
 # d e f i n e   I S _ D M A _ M E M O R Y _ D A T A _ S I Z E ( S I Z E )   ( ( ( S I Z E )   = =   D M A _ M D A T A A L I G N _ B Y T E )           | |   \  
                                                                               ( ( S I Z E )   = =   D M A _ M D A T A A L I G N _ H A L F W O R D )   | |   \  
                                                                               ( ( S I Z E )   = =   D M A _ M D A T A A L I G N _ W O R D   ) )  
  
 # d e f i n e   I S _ D M A _ M O D E ( M O D E )   ( ( ( M O D E )   = =   D M A _ N O R M A L   )     | |   \  
                                                       ( ( M O D E )   = =   D M A _ C I R C U L A R ) )  
  
 # d e f i n e   I S _ D M A _ P R I O R I T Y ( P R I O R I T Y )   ( ( ( P R I O R I T Y )   = =   D M A _ P R I O R I T Y _ L O W   )       | |   \  
                                                                       ( ( P R I O R I T Y )   = =   D M A _ P R I O R I T Y _ M E D I U M )   | |   \  
                                                                       ( ( P R I O R I T Y )   = =   D M A _ P R I O R I T Y _ H I G H )       | |   \  
                                                                       ( ( P R I O R I T Y )   = =   D M A _ P R I O R I T Y _ V E R Y _ H I G H ) )  
  
 / * *  
     *   @ }  
     * /    
  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
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
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ D M A _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  