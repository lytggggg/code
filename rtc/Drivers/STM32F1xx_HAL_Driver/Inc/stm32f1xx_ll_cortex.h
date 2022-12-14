??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ c o r t e x . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   C O R T E X   L L   m o d u l e .  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h e   L L   C O R T E X   d r i v e r   c o n t a i n s   a   s e t   o f   g e n e r i c   A P I s   t h a t   c a n   b e  
         u s e d   b y   u s e r :  
             ( + )   S Y S T I C K   c o n f i g u r a t i o n   u s e d   b y   @ r e f   L L _ m D e l a y   a n d   @ r e f   L L _ I n i t 1 m s T i c k  
                     f u n c t i o n s  
             ( + )   L o w   p o w e r   m o d e   c o n f i g u r a t i o n   ( S C B   r e g i s t e r   o f   C o r t e x - M C U )  
             ( + )   M P U   A P I   t o   c o n f i g u r e   a n d   e n a b l e   r e g i o n s  
                     ( M P U   s e r v i c e s   p r o v i d e d   o n l y   o n   s o m e   d e v i c e s )  
             ( + )   A P I   t o   a c c e s s   t o   M C U   i n f o   ( C P U I D   r e g i s t e r )  
             ( + )   A P I   t o   e n a b l e   f a u l t   h a n d l e r   ( S H C S R   a c c e s s e s )  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ L L _ C O R T E X _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ L L _ C O R T E X _ H  
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
 / * *   @ d e f g r o u p   C O R T E X _ L L   C O R T E X  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E x p o r t e d _ C o n s t a n t s   C O R T E X   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ C L K S O U R C E _ H C L K   S Y S T I C K   C l o c k   S o u r c e  
     *   @ {  
     * /  
 # d e f i n e   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K _ D I V 8           0 x 0 0 0 0 0 0 0 0 U                                   / * ! <   A H B   c l o c k   d i v i d e d   b y   8   s e l e c t e d   a s   S y s T i c k   c l o c k   s o u r c e . * /  
 # d e f i n e   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K                     S y s T i c k _ C T R L _ C L K S O U R C E _ M s k     / * ! <   A H B   c l o c k   s e l e c t e d   a s   S y s T i c k   c l o c k   s o u r c e .   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ F A U L T   H a n d l e r   F a u l t   t y p e  
     *   @ {  
     * /  
 # d e f i n e   L L _ H A N D L E R _ F A U L T _ U S G                               S C B _ S H C S R _ U S G F A U L T E N A _ M s k                             / * ! <   U s a g e   f a u l t   * /  
 # d e f i n e   L L _ H A N D L E R _ F A U L T _ B U S                               S C B _ S H C S R _ B U S F A U L T E N A _ M s k                             / * ! <   B u s   f a u l t   * /  
 # d e f i n e   L L _ H A N D L E R _ F A U L T _ M E M                               S C B _ S H C S R _ M E M F A U L T E N A _ M s k                             / * ! <   M e m o r y   m a n a g e m e n t   f a u l t   * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   _ _ M P U _ P R E S E N T  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ C T R L _ H F N M I _ P R I V D E F   M P U   C o n t r o l  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ C T R L _ H F N M I _ P R I V D E F _ N O N E           0 x 0 0 0 0 0 0 0 0 U                                                                               / * ! <   D i s a b l e   N M I   a n d   p r i v i l e g e d   S W   a c c e s s   * /  
 # d e f i n e   L L _ M P U _ C T R L _ H A R D F A U L T _ N M I                     M P U _ C T R L _ H F N M I E N A _ M s k                                                           / * ! <   E n a b l e s   t h e   o p e r a t i o n   o f   M P U   d u r i n g   h a r d   f a u l t ,   N M I ,   a n d   F A U L T M A S K   h a n d l e r s   * /  
 # d e f i n e   L L _ M P U _ C T R L _ P R I V I L E G E D _ D E F A U L T           M P U _ C T R L _ P R I V D E F E N A _ M s k                                                       / * ! <   E n a b l e   p r i v i l e g e d   s o f t w a r e   a c c e s s   t o   d e f a u l t   m e m o r y   m a p   * /  
 # d e f i n e   L L _ M P U _ C T R L _ H F N M I _ P R I V D E F                     ( M P U _ C T R L _ H F N M I E N A _ M s k   |   M P U _ C T R L _ P R I V D E F E N A _ M s k )   / * ! <   E n a b l e   N M I   a n d   p r i v i l e g e d   S W   a c c e s s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ R E G I O N   M P U   R e g i o n   N u m b e r  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N U M B E R 0                             0 x 0 0 U   / * ! <   R E G I O N   N u m b e r   0   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N U M B E R 1                             0 x 0 1 U   / * ! <   R E G I O N   N u m b e r   1   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N U M B E R 2                             0 x 0 2 U   / * ! <   R E G I O N   N u m b e r   2   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N U M B E R 3                             0 x 0 3 U   / * ! <   R E G I O N   N u m b e r   3   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N U M B E R 4                             0 x 0 4 U   / * ! <   R E G I O N   N u m b e r   4   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N U M B E R 5                             0 x 0 5 U   / * ! <   R E G I O N   N u m b e r   5   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N U M B E R 6                             0 x 0 6 U   / * ! <   R E G I O N   N u m b e r   6   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N U M B E R 7                             0 x 0 7 U   / * ! <   R E G I O N   N u m b e r   7   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ R E G I O N _ S I Z E   M P U   R e g i o n   S i z e  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 3 2 B                           ( 0 x 0 4 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   3 2 B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 6 4 B                           ( 0 x 0 5 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   6 4 B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 1 2 8 B                         ( 0 x 0 6 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   1 2 8 B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 2 5 6 B                         ( 0 x 0 7 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   2 5 6 B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 5 1 2 B                         ( 0 x 0 8 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   5 1 2 B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 1 K B                           ( 0 x 0 9 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   1 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 2 K B                           ( 0 x 0 A U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   2 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 4 K B                           ( 0 x 0 B U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   4 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 8 K B                           ( 0 x 0 C U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   8 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 1 6 K B                         ( 0 x 0 D U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   1 6 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 3 2 K B                         ( 0 x 0 E U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   3 2 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 6 4 K B                         ( 0 x 0 F U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   6 4 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 1 2 8 K B                       ( 0 x 1 0 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   1 2 8 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 2 5 6 K B                       ( 0 x 1 1 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   2 5 6 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 5 1 2 K B                       ( 0 x 1 2 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   5 1 2 K B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 1 M B                           ( 0 x 1 3 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   1 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 2 M B                           ( 0 x 1 4 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   2 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 4 M B                           ( 0 x 1 5 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   4 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 8 M B                           ( 0 x 1 6 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   8 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 1 6 M B                         ( 0 x 1 7 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   1 6 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 3 2 M B                         ( 0 x 1 8 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   3 2 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 6 4 M B                         ( 0 x 1 9 U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   6 4 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 1 2 8 M B                       ( 0 x 1 A U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   1 2 8 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 2 5 6 M B                       ( 0 x 1 B U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   2 5 6 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 5 1 2 M B                       ( 0 x 1 C U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   5 1 2 M B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 1 G B                           ( 0 x 1 D U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   1 G B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 2 G B                           ( 0 x 1 E U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   2 G B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ S I Z E _ 4 G B                           ( 0 x 1 F U   < <   M P U _ R A S R _ S I Z E _ P o s )   / * ! <   4 G B   S i z e   o f   t h e   M P U   p r o t e c t i o n   r e g i o n   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ R E G I O N _ P R I V I L E D G E S   M P U   R e g i o n   P r i v i l e g e s  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ N O _ A C C E S S                         ( 0 x 0 0 U   < <   M P U _ R A S R _ A P _ P o s )   / * ! <   N o   a c c e s s * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ P R I V _ R W                             ( 0 x 0 1 U   < <   M P U _ R A S R _ A P _ P o s )   / * ! <   R W   p r i v i l e g e d   ( p r i v i l e g e d   a c c e s s   o n l y ) * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ P R I V _ R W _ U R O                     ( 0 x 0 2 U   < <   M P U _ R A S R _ A P _ P o s )   / * ! <   R W   p r i v i l e g e d   -   R O   u s e r   ( W r i t e   i n   a   u s e r   p r o g r a m   g e n e r a t e s   a   f a u l t )   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ F U L L _ A C C E S S                     ( 0 x 0 3 U   < <   M P U _ R A S R _ A P _ P o s )   / * ! <   R W   p r i v i l e g e d   &   u s e r   ( F u l l   a c c e s s )   * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ P R I V _ R O                             ( 0 x 0 5 U   < <   M P U _ R A S R _ A P _ P o s )   / * ! <   R O   p r i v i l e g e d   ( p r i v i l e g e d   r e a d   o n l y ) * /  
 # d e f i n e   L L _ M P U _ R E G I O N _ P R I V _ R O _ U R O                     ( 0 x 0 6 U   < <   M P U _ R A S R _ A P _ P o s )   / * ! <   R O   p r i v i l e g e d   &   u s e r   ( r e a d   o n l y )   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ T E X   M P U   T E X   L e v e l  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ T E X _ L E V E L 0                                     ( 0 x 0 0 U   < <   M P U _ R A S R _ T E X _ P o s )   / * ! <   b 0 0 0   f o r   T E X   b i t s   * /  
 # d e f i n e   L L _ M P U _ T E X _ L E V E L 1                                     ( 0 x 0 1 U   < <   M P U _ R A S R _ T E X _ P o s )   / * ! <   b 0 0 1   f o r   T E X   b i t s   * /  
 # d e f i n e   L L _ M P U _ T E X _ L E V E L 2                                     ( 0 x 0 2 U   < <   M P U _ R A S R _ T E X _ P o s )   / * ! <   b 0 1 0   f o r   T E X   b i t s   * /  
 # d e f i n e   L L _ M P U _ T E X _ L E V E L 4                                     ( 0 x 0 4 U   < <   M P U _ R A S R _ T E X _ P o s )   / * ! <   b 1 0 0   f o r   T E X   b i t s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ I N S T R U C T I O N _ A C C E S S   M P U   I n s t r u c t i o n   A c c e s s  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ I N S T R U C T I O N _ A C C E S S _ E N A B L E       0 x 0 0 U                         / * ! <   I n s t r u c t i o n   f e t c h e s   e n a b l e d   * /  
 # d e f i n e   L L _ M P U _ I N S T R U C T I O N _ A C C E S S _ D I S A B L E     M P U _ R A S R _ X N _ M s k     / * ! <   I n s t r u c t i o n   f e t c h e s   d i s a b l e d * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ S H A R E A B L E _ A C C E S S   M P U   S h a r e a b l e   A c c e s s  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ A C C E S S _ S H A R E A B L E                         M P U _ R A S R _ S _ M s k       / * ! <   S h a r e a b l e   m e m o r y   a t t r i b u t e   * /  
 # d e f i n e   L L _ M P U _ A C C E S S _ N O T _ S H A R E A B L E                 0 x 0 0 U                         / * ! <   N o t   S h a r e a b l e   m e m o r y   a t t r i b u t e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ C A C H E A B L E _ A C C E S S   M P U   C a c h e a b l e   A c c e s s  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ A C C E S S _ C A C H E A B L E                         M P U _ R A S R _ C _ M s k       / * ! <   C a c h e a b l e   m e m o r y   a t t r i b u t e   * /  
 # d e f i n e   L L _ M P U _ A C C E S S _ N O T _ C A C H E A B L E                 0 x 0 0 U                         / * ! <   N o t   C a c h e a b l e   m e m o r y   a t t r i b u t e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E C _ B U F F E R A B L E _ A C C E S S   M P U   B u f f e r a b l e   A c c e s s  
     *   @ {  
     * /  
 # d e f i n e   L L _ M P U _ A C C E S S _ B U F F E R A B L E                       M P U _ R A S R _ B _ M s k       / * ! <   B u f f e r a b l e   m e m o r y   a t t r i b u t e   * /  
 # d e f i n e   L L _ M P U _ A C C E S S _ N O T _ B U F F E R A B L E               0 x 0 0 U                         / * ! <   N o t   B u f f e r a b l e   m e m o r y   a t t r i b u t e   * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   _ _ M P U _ P R E S E N T   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E x p o r t e d _ F u n c t i o n s   C O R T E X   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E F _ S Y S T I C K   S Y S T I C K  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   c h e c k s   i f   t h e   S y s t i c k   c o u n t e r   f l a g   i s   a c t i v e   o r   n o t .  
     *   @ n o t e       I t   c a n   b e   u s e d   i n   t i m e o u t   f u n c t i o n   o n   a p p l i c a t i o n   s i d e .  
     *   @ r m t o l l   S T K _ C T R L           C O U N T F L A G           L L _ S Y S T I C K _ I s A c t i v e C o u n t e r F l a g  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S Y S T I C K _ I s A c t i v e C o u n t e r F l a g ( v o i d )  
 {  
     r e t u r n   ( ( S y s T i c k - > C T R L   &   S y s T i c k _ C T R L _ C O U N T F L A G _ M s k )   = =   ( S y s T i c k _ C T R L _ C O U N T F L A G _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   S y s T i c k   c l o c k   s o u r c e  
     *   @ r m t o l l   S T K _ C T R L           C L K S O U R C E           L L _ S Y S T I C K _ S e t C l k S o u r c e  
     *   @ p a r a m     S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K _ D I V 8  
     *                   @ a r g   @ r e f   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S Y S T I C K _ S e t C l k S o u r c e ( u i n t 3 2 _ t   S o u r c e )  
 {  
     i f   ( S o u r c e   = =   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K )  
     {  
         S E T _ B I T ( S y s T i c k - > C T R L ,   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K ) ;  
     }  
     e l s e  
     {  
         C L E A R _ B I T ( S y s T i c k - > C T R L ,   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   S y s T i c k   c l o c k   s o u r c e  
     *   @ r m t o l l   S T K _ C T R L           C L K S O U R C E           L L _ S Y S T I C K _ G e t C l k S o u r c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K _ D I V 8  
     *                   @ a r g   @ r e f   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S Y S T I C K _ G e t C l k S o u r c e ( v o i d )  
 {  
     r e t u r n   R E A D _ B I T ( S y s T i c k - > C T R L ,   L L _ S Y S T I C K _ C L K S O U R C E _ H C L K ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   S y s T i c k   e x c e p t i o n   r e q u e s t  
     *   @ r m t o l l   S T K _ C T R L           T I C K I N T               L L _ S Y S T I C K _ E n a b l e I T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S Y S T I C K _ E n a b l e I T ( v o i d )  
 {  
     S E T _ B I T ( S y s T i c k - > C T R L ,   S y s T i c k _ C T R L _ T I C K I N T _ M s k ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   S y s T i c k   e x c e p t i o n   r e q u e s t  
     *   @ r m t o l l   S T K _ C T R L           T I C K I N T               L L _ S Y S T I C K _ D i s a b l e I T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S Y S T I C K _ D i s a b l e I T ( v o i d )  
 {  
     C L E A R _ B I T ( S y s T i c k - > C T R L ,   S y s T i c k _ C T R L _ T I C K I N T _ M s k ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   i f   t h e   S Y S T I C K   i n t e r r u p t   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   S T K _ C T R L           T I C K I N T               L L _ S Y S T I C K _ I s E n a b l e d I T  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S Y S T I C K _ I s E n a b l e d I T ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( S y s T i c k - > C T R L ,   S y s T i c k _ C T R L _ T I C K I N T _ M s k )   = =   ( S y s T i c k _ C T R L _ T I C K I N T _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E F _ L O W _ P O W E R _ M O D E   L O W   P O W E R   M O D E  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P r o c e s s o r   u s e s   s l e e p   a s   i t s   l o w   p o w e r   m o d e  
     *   @ r m t o l l   S C B _ S C R             S L E E P D E E P           L L _ L P M _ E n a b l e S l e e p  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ L P M _ E n a b l e S l e e p ( v o i d )  
 {  
     / *   C l e a r   S L E E P D E E P   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     C L E A R _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P D E E P _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P r o c e s s o r   u s e s   d e e p   s l e e p   a s   i t s   l o w   p o w e r   m o d e  
     *   @ r m t o l l   S C B _ S C R             S L E E P D E E P           L L _ L P M _ E n a b l e D e e p S l e e p  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ L P M _ E n a b l e D e e p S l e e p ( v o i d )  
 {  
     / *   S e t   S L E E P D E E P   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     S E T _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P D E E P _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   s l e e p - o n - e x i t   w h e n   r e t u r n i n g   f r o m   H a n d l e r   m o d e   t o   T h r e a d   m o d e .  
     *   @ n o t e       S e t t i n g   t h i s   b i t   t o   1   e n a b l e s   a n   i n t e r r u p t - d r i v e n   a p p l i c a t i o n   t o   a v o i d   r e t u r n i n g   t o   a n  
     *                   e m p t y   m a i n   a p p l i c a t i o n .  
     *   @ r m t o l l   S C B _ S C R             S L E E P O N E X I T       L L _ L P M _ E n a b l e S l e e p O n E x i t  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ L P M _ E n a b l e S l e e p O n E x i t ( v o i d )  
 {  
     / *   S e t   S L E E P O N E X I T   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     S E T _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P O N E X I T _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D o   n o t   s l e e p   w h e n   r e t u r n i n g   t o   T h r e a d   m o d e .  
     *   @ r m t o l l   S C B _ S C R             S L E E P O N E X I T       L L _ L P M _ D i s a b l e S l e e p O n E x i t  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ L P M _ D i s a b l e S l e e p O n E x i t ( v o i d )  
 {  
     / *   C l e a r   S L E E P O N E X I T   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     C L E A R _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S L E E P O N E X I T _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e d   e v e n t s   a n d   a l l   i n t e r r u p t s ,   i n c l u d i n g   d i s a b l e d   i n t e r r u p t s ,   c a n   w a k e u p   t h e  
     *                   p r o c e s s o r .  
     *   @ r m t o l l   S C B _ S C R             S E V E O N P E N D         L L _ L P M _ E n a b l e E v e n t O n P e n d  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ L P M _ E n a b l e E v e n t O n P e n d ( v o i d )  
 {  
     / *   S e t   S E V E O N P E N D   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     S E T _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S E V O N P E N D _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     O n l y   e n a b l e d   i n t e r r u p t s   o r   e v e n t s   c a n   w a k e u p   t h e   p r o c e s s o r ,   d i s a b l e d   i n t e r r u p t s   a r e  
     *                   e x c l u d e d  
     *   @ r m t o l l   S C B _ S C R             S E V E O N P E N D         L L _ L P M _ D i s a b l e E v e n t O n P e n d  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ L P M _ D i s a b l e E v e n t O n P e n d ( v o i d )  
 {  
     / *   C l e a r   S E V E O N P E N D   b i t   o f   C o r t e x   S y s t e m   C o n t r o l   R e g i s t e r   * /  
     C L E A R _ B I T ( S C B - > S C R ,   ( ( u i n t 3 2 _ t ) S C B _ S C R _ S E V O N P E N D _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E F _ H A N D L E R   H A N D L E R  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   a   f a u l t   i n   S y s t e m   h a n d l e r   c o n t r o l   r e g i s t e r   ( S H C S R )  
     *   @ r m t o l l   S C B _ S H C S R         M E M F A U L T E N A       L L _ H A N D L E R _ E n a b l e F a u l t  
     *   @ p a r a m     F a u l t   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ H A N D L E R _ F A U L T _ U S G  
     *                   @ a r g   @ r e f   L L _ H A N D L E R _ F A U L T _ B U S  
     *                   @ a r g   @ r e f   L L _ H A N D L E R _ F A U L T _ M E M  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ H A N D L E R _ E n a b l e F a u l t ( u i n t 3 2 _ t   F a u l t )  
 {  
     / *   E n a b l e   t h e   s y s t e m   h a n d l e r   f a u l t   * /  
     S E T _ B I T ( S C B - > S H C S R ,   F a u l t ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   a   f a u l t   i n   S y s t e m   h a n d l e r   c o n t r o l   r e g i s t e r   ( S H C S R )  
     *   @ r m t o l l   S C B _ S H C S R         M E M F A U L T E N A       L L _ H A N D L E R _ D i s a b l e F a u l t  
     *   @ p a r a m     F a u l t   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ H A N D L E R _ F A U L T _ U S G  
     *                   @ a r g   @ r e f   L L _ H A N D L E R _ F A U L T _ B U S  
     *                   @ a r g   @ r e f   L L _ H A N D L E R _ F A U L T _ M E M  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ H A N D L E R _ D i s a b l e F a u l t ( u i n t 3 2 _ t   F a u l t )  
 {  
     / *   D i s a b l e   t h e   s y s t e m   h a n d l e r   f a u l t   * /  
     C L E A R _ B I T ( S C B - > S H C S R ,   F a u l t ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E F _ M C U _ I N F O   M C U   I N F O  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     G e t   I m p l e m e n t e r   c o d e  
     *   @ r m t o l l   S C B _ C P U I D         I M P L E M E N T E R       L L _ C P U I D _ G e t I m p l e m e n t e r  
     *   @ r e t v a l   V a l u e   s h o u l d   b e   e q u a l   t o   0 x 4 1   f o r   A R M  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ C P U I D _ G e t I m p l e m e n t e r ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S C B - > C P U I D ,   S C B _ C P U I D _ I M P L E M E N T E R _ M s k )   > >   S C B _ C P U I D _ I M P L E M E N T E R _ P o s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   V a r i a n t   n u m b e r   ( T h e   r   v a l u e   i n   t h e   r n p n   p r o d u c t   r e v i s i o n   i d e n t i f i e r )  
     *   @ r m t o l l   S C B _ C P U I D         V A R I A N T               L L _ C P U I D _ G e t V a r i a n t  
     *   @ r e t v a l   V a l u e   b e t w e e n   0   a n d   2 5 5   ( 0 x 1 :   r e v i s i o n   1 ,   0 x 2 :   r e v i s i o n   2 )  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ C P U I D _ G e t V a r i a n t ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S C B - > C P U I D ,   S C B _ C P U I D _ V A R I A N T _ M s k )   > >   S C B _ C P U I D _ V A R I A N T _ P o s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C o n s t a n t   n u m b e r  
     *   @ r m t o l l   S C B _ C P U I D         A R C H I T E C T U R E     L L _ C P U I D _ G e t C o n s t a n t  
     *   @ r e t v a l   V a l u e   s h o u l d   b e   e q u a l   t o   0 x F   f o r   C o r t e x - M 3   d e v i c e s  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ C P U I D _ G e t C o n s t a n t ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S C B - > C P U I D ,   S C B _ C P U I D _ A R C H I T E C T U R E _ M s k )   > >   S C B _ C P U I D _ A R C H I T E C T U R E _ P o s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P a r t   n u m b e r  
     *   @ r m t o l l   S C B _ C P U I D         P A R T N O                 L L _ C P U I D _ G e t P a r N o  
     *   @ r e t v a l   V a l u e   s h o u l d   b e   e q u a l   t o   0 x C 2 3   f o r   C o r t e x - M 3  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ C P U I D _ G e t P a r N o ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S C B - > C P U I D ,   S C B _ C P U I D _ P A R T N O _ M s k )   > >   S C B _ C P U I D _ P A R T N O _ P o s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   R e v i s i o n   n u m b e r   ( T h e   p   v a l u e   i n   t h e   r n p n   p r o d u c t   r e v i s i o n   i d e n t i f i e r ,   i n d i c a t e s   p a t c h   r e l e a s e )  
     *   @ r m t o l l   S C B _ C P U I D         R E V I S I O N             L L _ C P U I D _ G e t R e v i s i o n  
     *   @ r e t v a l   V a l u e   b e t w e e n   0   a n d   2 5 5   ( 0 x 0 :   p a t c h   0 ,   0 x 1 :   p a t c h   1 )  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ C P U I D _ G e t R e v i s i o n ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S C B - > C P U I D ,   S C B _ C P U I D _ R E V I S I O N _ M s k )   > >   S C B _ C P U I D _ R E V I S I O N _ P o s ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   _ _ M P U _ P R E S E N T  
 / * *   @ d e f g r o u p   C O R T E X _ L L _ E F _ M P U   M P U  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   M P U   w i t h   i n p u t   o p t i o n s  
     *   @ r m t o l l   M P U _ C T R L           E N A B L E                 L L _ M P U _ E n a b l e  
     *   @ p a r a m     O p t i o n s   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ M P U _ C T R L _ H F N M I _ P R I V D E F _ N O N E  
     *                   @ a r g   @ r e f   L L _ M P U _ C T R L _ H A R D F A U L T _ N M I  
     *                   @ a r g   @ r e f   L L _ M P U _ C T R L _ P R I V I L E G E D _ D E F A U L T  
     *                   @ a r g   @ r e f   L L _ M P U _ C T R L _ H F N M I _ P R I V D E F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ M P U _ E n a b l e ( u i n t 3 2 _ t   O p t i o n s )  
 {  
     / *   E n a b l e   t h e   M P U * /  
     W R I T E _ R E G ( M P U - > C T R L ,   ( M P U _ C T R L _ E N A B L E _ M s k   |   O p t i o n s ) ) ;  
     / *   E n s u r e   M P U   s e t t i n g s   t a k e   e f f e c t s   * /  
     _ _ D S B ( ) ;  
     / *   S e q u e n c e   i n s t r u c t i o n   f e t c h e s   u s i n g   u p d a t e   s e t t i n g s   * /  
     _ _ I S B ( ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   M P U  
     *   @ r m t o l l   M P U _ C T R L           E N A B L E                 L L _ M P U _ D i s a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ M P U _ D i s a b l e ( v o i d )  
 {  
     / *   M a k e   s u r e   o u t s t a n d i n g   t r a n s f e r s   a r e   d o n e   * /  
     _ _ D M B ( ) ;  
     / *   D i s a b l e   M P U * /  
     W R I T E _ R E G ( M P U - > C T R L ,   0 U ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   M P U   i s   e n a b l e d   o r   n o t  
     *   @ r m t o l l   M P U _ C T R L           E N A B L E                 L L _ M P U _ I s E n a b l e d  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ M P U _ I s E n a b l e d ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( M P U - > C T R L ,   M P U _ C T R L _ E N A B L E _ M s k )   = =   ( M P U _ C T R L _ E N A B L E _ M s k ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   a   M P U   r e g i o n  
     *   @ r m t o l l   M P U _ R A S R           E N A B L E                 L L _ M P U _ E n a b l e R e g i o n  
     *   @ p a r a m     R e g i o n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 0  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 1  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 2  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 3  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 4  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 5  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 6  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ M P U _ E n a b l e R e g i o n ( u i n t 3 2 _ t   R e g i o n )  
 {  
     / *   S e t   R e g i o n   n u m b e r   * /  
     W R I T E _ R E G ( M P U - > R N R ,   R e g i o n ) ;  
     / *   E n a b l e   t h e   M P U   r e g i o n   * /  
     S E T _ B I T ( M P U - > R A S R ,   M P U _ R A S R _ E N A B L E _ M s k ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   a n d   e n a b l e   a   r e g i o n  
     *   @ r m t o l l   M P U _ R N R             R E G I O N                 L L _ M P U _ C o n f i g R e g i o n \ n  
     *                   M P U _ R B A R           R E G I O N                 L L _ M P U _ C o n f i g R e g i o n \ n  
     *                   M P U _ R B A R           A D D R                     L L _ M P U _ C o n f i g R e g i o n \ n  
     *                   M P U _ R A S R           X N                         L L _ M P U _ C o n f i g R e g i o n \ n  
     *                   M P U _ R A S R           A P                         L L _ M P U _ C o n f i g R e g i o n \ n  
     *                   M P U _ R A S R           S                           L L _ M P U _ C o n f i g R e g i o n \ n  
     *                   M P U _ R A S R           C                           L L _ M P U _ C o n f i g R e g i o n \ n  
     *                   M P U _ R A S R           B                           L L _ M P U _ C o n f i g R e g i o n \ n  
     *                   M P U _ R A S R           S I Z E                     L L _ M P U _ C o n f i g R e g i o n  
     *   @ p a r a m     R e g i o n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 0  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 1  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 2  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 3  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 4  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 5  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 6  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 7  
     *   @ p a r a m     A d d r e s s   V a l u e   o f   r e g i o n   b a s e   a d d r e s s  
     *   @ p a r a m     S u b R e g i o n D i s a b l e   S u b - r e g i o n   d i s a b l e   v a l u e   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F  
     *   @ p a r a m     A t t r i b u t e s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 3 2 B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 6 4 B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 1 2 8 B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 2 5 6 B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 5 1 2 B  
     *                       o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 1 K B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 2 K B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 4 K B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 8 K B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 1 6 K B  
     *                       o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 3 2 K B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 6 4 K B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 1 2 8 K B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 2 5 6 K B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 5 1 2 K B  
     *                       o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 1 M B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 2 M B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 4 M B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 8 M B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 1 6 M B  
     *                       o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 3 2 M B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 6 4 M B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 1 2 8 M B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 2 5 6 M B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 5 1 2 M B  
     *                       o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 1 G B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 2 G B   o r   @ r e f   L L _ M P U _ R E G I O N _ S I Z E _ 4 G B  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N O _ A C C E S S   o r   @ r e f   L L _ M P U _ R E G I O N _ P R I V _ R W   o r   @ r e f   L L _ M P U _ R E G I O N _ P R I V _ R W _ U R O   o r   @ r e f   L L _ M P U _ R E G I O N _ F U L L _ A C C E S S  
     *                       o r   @ r e f   L L _ M P U _ R E G I O N _ P R I V _ R O   o r   @ r e f   L L _ M P U _ R E G I O N _ P R I V _ R O _ U R O  
     *                   @ a r g   @ r e f   L L _ M P U _ T E X _ L E V E L 0   o r   @ r e f   L L _ M P U _ T E X _ L E V E L 1   o r   @ r e f   L L _ M P U _ T E X _ L E V E L 2   o r   @ r e f   L L _ M P U _ T E X _ L E V E L 4  
     *                   @ a r g   @ r e f   L L _ M P U _ I N S T R U C T I O N _ A C C E S S _ E N A B L E   o r     @ r e f   L L _ M P U _ I N S T R U C T I O N _ A C C E S S _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ M P U _ A C C E S S _ S H A R E A B L E   o r   @ r e f   L L _ M P U _ A C C E S S _ N O T _ S H A R E A B L E  
     *                   @ a r g   @ r e f   L L _ M P U _ A C C E S S _ C A C H E A B L E   o r   @ r e f   L L _ M P U _ A C C E S S _ N O T _ C A C H E A B L E  
     *                   @ a r g   @ r e f   L L _ M P U _ A C C E S S _ B U F F E R A B L E   o r   @ r e f   L L _ M P U _ A C C E S S _ N O T _ B U F F E R A B L E  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ M P U _ C o n f i g R e g i o n ( u i n t 3 2 _ t   R e g i o n ,   u i n t 3 2 _ t   S u b R e g i o n D i s a b l e ,   u i n t 3 2 _ t   A d d r e s s ,   u i n t 3 2 _ t   A t t r i b u t e s )  
 {  
     / *   S e t   R e g i o n   n u m b e r   * /  
     W R I T E _ R E G ( M P U - > R N R ,   R e g i o n ) ;  
     / *   S e t   b a s e   a d d r e s s   * /  
     W R I T E _ R E G ( M P U - > R B A R ,   ( A d d r e s s   &   0 x F F F F F F E 0 U ) ) ;  
     / *   C o n f i g u r e   M P U   * /  
     W R I T E _ R E G ( M P U - > R A S R ,   ( M P U _ R A S R _ E N A B L E _ M s k   |   A t t r i b u t e s   |   S u b R e g i o n D i s a b l e   < <   M P U _ R A S R _ S R D _ P o s ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   a   r e g i o n  
     *   @ r m t o l l   M P U _ R N R             R E G I O N                 L L _ M P U _ D i s a b l e R e g i o n \ n  
     *                   M P U _ R A S R           E N A B L E                 L L _ M P U _ D i s a b l e R e g i o n  
     *   @ p a r a m     R e g i o n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 0  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 1  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 2  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 3  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 4  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 5  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 6  
     *                   @ a r g   @ r e f   L L _ M P U _ R E G I O N _ N U M B E R 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ M P U _ D i s a b l e R e g i o n ( u i n t 3 2 _ t   R e g i o n )  
 {  
     / *   S e t   R e g i o n   n u m b e r   * /  
     W R I T E _ R E G ( M P U - > R N R ,   R e g i o n ) ;  
     / *   D i s a b l e   t h e   M P U   r e g i o n   * /  
     C L E A R _ B I T ( M P U - > R A S R ,   M P U _ R A S R _ E N A B L E _ M s k ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   _ _ M P U _ P R E S E N T   * /  
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
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ L L _ C O R T E X _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  