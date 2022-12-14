??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       T h i s   f i l e   c o n t a i n s   a l l   t h e   f u n c t i o n s   p r o t o t y p e s   f o r   t h e   H A L  
     *                     m o d u l e   d r i v e r .  
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
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ c o n f . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   H A L  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   H A L _ E x p o r t e d _ C o n s t a n t s   H A L   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ T I C K _ F R E Q   T i c k   F r e q u e n c y  
     *   @ {  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ T I C K _ F R E Q _ 1 0 H Z                   =   1 0 0 U ,  
     H A L _ T I C K _ F R E Q _ 1 0 0 H Z                 =   1 0 U ,  
     H A L _ T I C K _ F R E Q _ 1 K H Z                   =   1 U ,  
     H A L _ T I C K _ F R E Q _ D E F A U L T             =   H A L _ T I C K _ F R E Q _ 1 K H Z  
 }   H A L _ T i c k F r e q T y p e D e f ;  
 / * *  
     *   @ }  
     * /  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 e x t e r n   _ _ I O   u i n t 3 2 _ t   u w T i c k ;  
 e x t e r n   u i n t 3 2 _ t   u w T i c k P r i o ;  
 e x t e r n   H A L _ T i c k F r e q T y p e D e f   u w T i c k F r e q ;  
  
 / * *  
     *   @ }  
     * /  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   H A L _ E x p o r t e d _ M a c r o s   H A L   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   D B G M C U _ F r e e z e _ U n f r e e z e   F r e e z e   U n f r e e z e   P e r i p h e r a l s   i n   D e b u g   m o d e  
     *   @ b r i e f       F r e e z e / U n f r e e z e   P e r i p h e r a l s   i n   D e b u g   m o d e  
     *   N o t e :   O n   d e v i c e s   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B ,  
     *                                     S T M 3 2 F 1 0 1 x C / D / E   a n d   S T M 3 2 F 1 0 3 x C / D / E ,  
     *                                     S T M 3 2 F 1 0 1 x F / G   a n d   S T M 3 2 F 1 0 3 x F / G  
     *                                     S T M 3 2 F 1 0 x x 4   a n d   S T M 3 2 F 1 0 x x 6  
     *               D e b u g   r e g i s t e r s   D B G M C U _ I D C O D E   a n d   D B G M C U _ C R   a r e   a c c e s s i b l e   o n l y   i n  
     *               d e b u g   m o d e   ( n o t   a c c e s s i b l e   b y   t h e   u s e r   s o f t w a r e   i n   n o r m a l   m o d e ) .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   @ {  
     * /  
  
 / *   P e r i p h e r a l s   o n   A P B 1   * /  
 / * *  
     *   @ b r i e f     T I M 2   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 2 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 2 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 2 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 2 _ S T O P )  
  
 / * *  
     *   @ b r i e f     T I M 3   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 3 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 3 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 3 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 3 _ S T O P )  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 4 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 4   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 4 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 4 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 4 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 4 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 5 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 5   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 5 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 5 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 5 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 5 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 6 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 6   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 6 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 6 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 6 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 6 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 7 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 7   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 7 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 7 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 7 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 7 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 2 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1 2   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 2 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 2 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 2 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 2 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 3 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1 3   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 3 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 3 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 3 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 3 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 4 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1 4   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 4 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 4 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 4 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 4 _ S T O P )  
 # e n d i f  
  
 / * *  
     *   @ b r i e f     W W D G   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ W W D G ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ W W D G _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ W W D G ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ W W D G _ S T O P )  
  
 / * *  
     *   @ b r i e f     I W D G   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ I W D G ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ I W D G _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ I W D G ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ I W D G _ S T O P )  
  
 / * *  
     *   @ b r i e f     I 2 C 1   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ I 2 C 1 _ T I M E O U T ( )         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ I 2 C 1 _ S M B U S _ T I M E O U T )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ I 2 C 1 _ T I M E O U T ( )     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ I 2 C 1 _ S M B U S _ T I M E O U T )  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ I 2 C 2 _ S M B U S _ T I M E O U T )  
 / * *  
     *   @ b r i e f     I 2 C 2   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ I 2 C 2 _ T I M E O U T ( )         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ I 2 C 2 _ S M B U S _ T I M E O U T )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ I 2 C 2 _ T I M E O U T ( )     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ I 2 C 2 _ S M B U S _ T I M E O U T )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ C A N 1 _ S T O P )  
 / * *  
     *   @ b r i e f     C A N 1   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ C A N 1 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ C A N 1 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ C A N 1 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ C A N 1 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ C A N 2 _ S T O P )  
 / * *  
     *   @ b r i e f     C A N 2   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ C A N 2 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ C A N 2 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ C A N 2 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ C A N 2 _ S T O P )  
 # e n d i f  
  
 / *   P e r i p h e r a l s   o n   A P B 2   * /  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 8 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 8   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 8 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 8 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 8 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 8 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 9 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 9   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 9 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 9 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 9 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 9 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 0 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1 0   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 0 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 0 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 0 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 0 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 1 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1 1   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 1 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 1 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 1 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 1 _ S T O P )  
 # e n d i f  
  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 5 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1 5   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 5 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 5 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 5 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 5 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 6 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1 6   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 6 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 6 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 6 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 6 _ S T O P )  
 # e n d i f  
  
 # i f   d e f i n e d   ( D B G M C U _ C R _ D B G _ T I M 1 7 _ S T O P )  
 / * *  
     *   @ b r i e f     T I M 1 7   P e r i p h e r a l s   D e b u g   m o d e  
     * /  
 # d e f i n e   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 7 ( )                         S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 7 _ S T O P )  
 # d e f i n e   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 7 ( )                     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ T I M 1 7 _ S T O P )  
 # e n d i f  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ P r i v a t e _ M a c r o s   H A L   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ T I C K F R E Q ( F R E Q )   ( ( ( F R E Q )   = =   H A L _ T I C K _ F R E Q _ 1 0 H Z )     | |   \  
                                                       ( ( F R E Q )   = =   H A L _ T I C K _ F R E Q _ 1 0 0 H Z )   | |   \  
                                                       ( ( F R E Q )   = =   H A L _ T I C K _ F R E Q _ 1 K H Z ) )  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   H A L _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
 / * *   @ a d d t o g r o u p   H A L _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I n i t ( v o i d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D e I n i t ( v o i d ) ;  
 v o i d   H A L _ M s p I n i t ( v o i d ) ;  
 v o i d   H A L _ M s p D e I n i t ( v o i d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ I n i t T i c k ( u i n t 3 2 _ t   T i c k P r i o r i t y ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   H A L _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 v o i d   H A L _ I n c T i c k ( v o i d ) ;  
 v o i d   H A L _ D e l a y ( u i n t 3 2 _ t   D e l a y ) ;  
 u i n t 3 2 _ t   H A L _ G e t T i c k ( v o i d ) ;  
 u i n t 3 2 _ t   H A L _ G e t T i c k P r i o ( v o i d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S e t T i c k F r e q ( H A L _ T i c k F r e q T y p e D e f   F r e q ) ;  
 H A L _ T i c k F r e q T y p e D e f   H A L _ G e t T i c k F r e q ( v o i d ) ;  
 v o i d   H A L _ S u s p e n d T i c k ( v o i d ) ;  
 v o i d   H A L _ R e s u m e T i c k ( v o i d ) ;  
 u i n t 3 2 _ t   H A L _ G e t H a l V e r s i o n ( v o i d ) ;  
 u i n t 3 2 _ t   H A L _ G e t R E V I D ( v o i d ) ;  
 u i n t 3 2 _ t   H A L _ G e t D E V I D ( v o i d ) ;  
 u i n t 3 2 _ t   H A L _ G e t U I D w 0 ( v o i d ) ;  
 u i n t 3 2 _ t   H A L _ G e t U I D w 1 ( v o i d ) ;  
 u i n t 3 2 _ t   H A L _ G e t U I D w 2 ( v o i d ) ;  
 v o i d   H A L _ D B G M C U _ E n a b l e D B G S l e e p M o d e ( v o i d ) ;  
 v o i d   H A L _ D B G M C U _ D i s a b l e D B G S l e e p M o d e ( v o i d ) ;  
 v o i d   H A L _ D B G M C U _ E n a b l e D B G S t o p M o d e ( v o i d ) ;  
 v o i d   H A L _ D B G M C U _ D i s a b l e D B G S t o p M o d e ( v o i d ) ;  
 v o i d   H A L _ D B G M C U _ E n a b l e D B G S t a n d b y M o d e ( v o i d ) ;  
 v o i d   H A L _ D B G M C U _ D i s a b l e D B G S t a n d b y M o d e ( v o i d ) ;  
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
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   H A L _ P r i v a t e _ V a r i a b l e s   H A L   P r i v a t e   V a r i a b l e s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   H A L _ P r i v a t e _ C o n s t a n t s   H A L   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
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
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  