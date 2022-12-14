??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ c o r t e x . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       C O R T E X   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g    
     *                     f u n c t i o n a l i t i e s   o f   t h e   C O R T E X :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s    
     *  
     @ v e r b a t i m      
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
         [ . . ]      
         * * *   H o w   t o   c o n f i g u r e   I n t e r r u p t s   u s i n g   C O R T E X   H A L   d r i v e r   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]            
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   c o n f i g u r e   t h e   N V I C   i n t e r r u p t s   ( I R Q ) .  
         T h e   C o r t e x - M 3   e x c e p t i o n s   a r e   m a n a g e d   b y   C M S I S   f u n c t i o n s .  
        
         ( # )   C o n f i g u r e   t h e   N V I C   P r i o r i t y   G r o u p i n g   u s i n g   H A L _ N V I C _ S e t P r i o r i t y G r o u p i n g ( )  
                 f u n c t i o n   a c c o r d i n g   t o   t h e   f o l l o w i n g   t a b l e .  
         ( # )   C o n f i g u r e   t h e   p r i o r i t y   o f   t h e   s e l e c t e d   I R Q   C h a n n e l s   u s i n g   H A L _ N V I C _ S e t P r i o r i t y ( ) .    
         ( # )   E n a b l e   t h e   s e l e c t e d   I R Q   C h a n n e l s   u s i n g   H A L _ N V I C _ E n a b l e I R Q ( ) .  
         ( # )   p l e a s e   r e f e r   t o   p r o g r a m m i n g   m a n u a l   f o r   d e t a i l s   i n   h o w   t o   c o n f i g u r e   p r i o r i t y .    
              
           - @ -   W h e n   t h e   N V I C _ P R I O R I T Y G R O U P _ 0   i s   s e l e c t e d ,   I R Q   p r e e m p t i o n   i s   n o   m o r e   p o s s i b l e .    
                   T h e   p e n d i n g   I R Q   p r i o r i t y   w i l l   b e   m a n a g e d   o n l y   b y   t h e   s u b   p r i o r i t y .  
        
           - @ -   I R Q   p r i o r i t y   o r d e r   ( s o r t e d   b y   h i g h e s t   t o   l o w e s t   p r i o r i t y ) :  
                 ( + @ )   L o w e s t   p r e e m p t i o n   p r i o r i t y  
                 ( + @ )   L o w e s t   s u b   p r i o r i t y  
                 ( + @ )   L o w e s t   h a r d w a r e   p r i o r i t y   ( I R Q   n u m b e r )  
    
         [ . . ]      
         * * *   H o w   t o   c o n f i g u r e   S y s t i c k   u s i n g   C O R T E X   H A L   d r i v e r   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         S e t u p   S y s T i c k   T i m e r   f o r   t i m e   b a s e .  
                        
       ( + )   T h e   H A L _ S Y S T I C K _ C o n f i g ( ) f u n c t i o n   c a l l s   t h e   S y s T i c k _ C o n f i g ( )   f u n c t i o n   w h i c h  
               i s   a   C M S I S   f u n c t i o n   t h a t :  
                 ( + + )   C o n f i g u r e s   t h e   S y s T i c k   R e l o a d   r e g i s t e r   w i t h   v a l u e   p a s s e d   a s   f u n c t i o n   p a r a m e t e r .  
                 ( + + )   C o n f i g u r e s   t h e   S y s T i c k   I R Q   p r i o r i t y   t o   t h e   l o w e s t   v a l u e   0 x 0 F .  
                 ( + + )   R e s e t s   t h e   S y s T i c k   C o u n t e r   r e g i s t e r .  
                 ( + + )   C o n f i g u r e s   t h e   S y s T i c k   C o u n t e r   c l o c k   s o u r c e   t o   b e   C o r e   C l o c k   S o u r c e   ( H C L K ) .  
                 ( + + )   E n a b l e s   t h e   S y s T i c k   I n t e r r u p t .  
                 ( + + )   S t a r t s   t h e   S y s T i c k   C o u n t e r .  
          
       ( + )   Y o u   c a n   c h a n g e   t h e   S y s T i c k   C l o c k   s o u r c e   t o   b e   H C L K _ D i v 8   b y   c a l l i n g   t h e   m a c r o  
               _ _ H A L _ C O R T E X _ S Y S T I C K C L K _ C O N F I G ( S Y S T I C K _ C L K S O U R C E _ H C L K _ D I V 8 )   j u s t   a f t e r   t h e  
               H A L _ S Y S T I C K _ C o n f i g ( )   f u n c t i o n   c a l l .   T h e   _ _ H A L _ C O R T E X _ S Y S T I C K C L K _ C O N F I G ( )   m a c r o   i s   d e f i n e d  
               i n s i d e   t h e   s t m 3 2 f 1 x x _ h a l _ c o r t e x . h   f i l e .  
  
       ( + )   Y o u   c a n   c h a n g e   t h e   S y s T i c k   I R Q   p r i o r i t y   b y   c a l l i n g   t h e  
               H A L _ N V I C _ S e t P r i o r i t y ( S y s T i c k _ I R Q n , . . . )   f u n c t i o n   j u s t   a f t e r   t h e   H A L _ S Y S T I C K _ C o n f i g ( )   f u n c t i o n    
               c a l l .   T h e   H A L _ N V I C _ S e t P r i o r i t y ( )   c a l l   t h e   N V I C _ S e t P r i o r i t y ( )   f u n c t i o n   w h i c h   i s   a   C M S I S   f u n c t i o n .  
  
       ( + )   T o   a d j u s t   t h e   S y s T i c k   t i m e   b a s e ,   u s e   t h e   f o l l o w i n g   f o r m u l a :  
                                                          
               R e l o a d   V a l u e   =   S y s T i c k   C o u n t e r   C l o c k   ( H z )   x     D e s i r e d   T i m e   b a s e   ( s )  
               ( + + )   R e l o a d   V a l u e   i s   t h e   p a r a m e t e r   t o   b e   p a s s e d   f o r   H A L _ S Y S T I C K _ C o n f i g ( )   f u n c t i o n  
               ( + + )   R e l o a d   V a l u e   s h o u l d   n o t   e x c e e d   0 x F F F F F F  
        
     @ e n d v e r b a t i m  
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
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X   C O R T E X  
     *   @ b r i e f   C O R T E X   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ C O R T E X _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ E x p o r t e d _ F u n c t i o n s   C O R T E X   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
  
 / * *   @ d e f g r o u p   C O R T E X _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s    
     *  
 @ v e r b a t i m          
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h i s   s e c t i o n   p r o v i d e s   t h e   C O R T E X   H A L   d r i v e r   f u n c t i o n s   a l l o w i n g   t o   c o n f i g u r e   I n t e r r u p t s  
             S y s t i c k   f u n c t i o n a l i t i e s    
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
  
 / * *  
     *   @ b r i e f     S e t s   t h e   p r i o r i t y   g r o u p i n g   f i e l d   ( p r e e m p t i o n   p r i o r i t y   a n d   s u b p r i o r i t y )  
     *                   u s i n g   t h e   r e q u i r e d   u n l o c k   s e q u e n c e .  
     *   @ p a r a m     P r i o r i t y G r o u p :   T h e   p r i o r i t y   g r o u p i n g   b i t s   l e n g t h .    
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   N V I C _ P R I O R I T Y G R O U P _ 0 :   0   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                         4   b i t s   f o r   s u b p r i o r i t y  
     *                   @ a r g   N V I C _ P R I O R I T Y G R O U P _ 1 :   1   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                         3   b i t s   f o r   s u b p r i o r i t y  
     *                   @ a r g   N V I C _ P R I O R I T Y G R O U P _ 2 :   2   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                         2   b i t s   f o r   s u b p r i o r i t y  
     *                   @ a r g   N V I C _ P R I O R I T Y G R O U P _ 3 :   3   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                         1   b i t s   f o r   s u b p r i o r i t y  
     *                   @ a r g   N V I C _ P R I O R I T Y G R O U P _ 4 :   4   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                         0   b i t s   f o r   s u b p r i o r i t y  
     *   @ n o t e       W h e n   t h e   N V I C _ P r i o r i t y G r o u p _ 0   i s   s e l e c t e d ,   I R Q   p r e e m p t i o n   i s   n o   m o r e   p o s s i b l e .    
     *                   T h e   p e n d i n g   I R Q   p r i o r i t y   w i l l   b e   m a n a g e d   o n l y   b y   t h e   s u b p r i o r i t y .    
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ N V I C _ S e t P r i o r i t y G r o u p i n g ( u i n t 3 2 _ t   P r i o r i t y G r o u p )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ P R I O R I T Y _ G R O U P ( P r i o r i t y G r o u p ) ) ;  
      
     / *   S e t   t h e   P R I G R O U P [ 1 0 : 8 ]   b i t s   a c c o r d i n g   t o   t h e   P r i o r i t y G r o u p   p a r a m e t e r   v a l u e   * /  
     N V I C _ S e t P r i o r i t y G r o u p i n g ( P r i o r i t y G r o u p ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t s   t h e   p r i o r i t y   o f   a n   i n t e r r u p t .  
     *   @ p a r a m     I R Q n :   E x t e r n a l   i n t e r r u p t   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n   e n u m e r a t o r   o f   I R Q n _ T y p e   e n u m e r a t i o n  
     *                   ( F o r   t h e   c o m p l e t e   S T M 3 2   D e v i c e s   I R Q   C h a n n e l s   l i s t ,   p l e a s e   r e f e r   t o   t h e   a p p r o p r i a t e   C M S I S   d e v i c e   f i l e   ( s t m 3 2 f 1 0 x x . h ) )  
     *   @ p a r a m     P r e e m p t P r i o r i t y :   T h e   p r e e m p t i o n   p r i o r i t y   f o r   t h e   I R Q n   c h a n n e l .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   b e t w e e n   0   a n d   1 5  
     *                   A   l o w e r   p r i o r i t y   v a l u e   i n d i c a t e s   a   h i g h e r   p r i o r i t y    
     *   @ p a r a m     S u b P r i o r i t y :   t h e   s u b p r i o r i t y   l e v e l   f o r   t h e   I R Q   c h a n n e l .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   b e t w e e n   0   a n d   1 5  
     *                   A   l o w e r   p r i o r i t y   v a l u e   i n d i c a t e s   a   h i g h e r   p r i o r i t y .                      
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ N V I C _ S e t P r i o r i t y ( I R Q n _ T y p e   I R Q n ,   u i n t 3 2 _ t   P r e e m p t P r i o r i t y ,   u i n t 3 2 _ t   S u b P r i o r i t y )  
 {    
     u i n t 3 2 _ t   p r i o r i t y g r o u p   =   0 x 0 0 U ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ S U B _ P R I O R I T Y ( S u b P r i o r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ N V I C _ P R E E M P T I O N _ P R I O R I T Y ( P r e e m p t P r i o r i t y ) ) ;  
      
     p r i o r i t y g r o u p   =   N V I C _ G e t P r i o r i t y G r o u p i n g ( ) ;  
      
     N V I C _ S e t P r i o r i t y ( I R Q n ,   N V I C _ E n c o d e P r i o r i t y ( p r i o r i t y g r o u p ,   P r e e m p t P r i o r i t y ,   S u b P r i o r i t y ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   N V I C   i n t e r r u p t   c o n t r o l l e r .  
     *   @ n o t e       T o   c o n f i g u r e   i n t e r r u p t s   p r i o r i t y   c o r r e c t l y ,   t h e   N V I C _ P r i o r i t y G r o u p C o n f i g ( )  
     *                   f u n c t i o n   s h o u l d   b e   c a l l e d   b e f o r e .    
     *   @ p a r a m     I R Q n   E x t e r n a l   i n t e r r u p t   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n   e n u m e r a t o r   o f   I R Q n _ T y p e   e n u m e r a t i o n  
     *                   ( F o r   t h e   c o m p l e t e   S T M 3 2   D e v i c e s   I R Q   C h a n n e l s   l i s t ,   p l e a s e   r e f e r   t o   t h e   a p p r o p r i a t e   C M S I S   d e v i c e   f i l e   ( s t m 3 2 f 1 0 x x x . h ) )  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ N V I C _ E n a b l e I R Q ( I R Q n _ T y p e   I R Q n )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ D E V I C E _ I R Q ( I R Q n ) ) ;  
  
     / *   E n a b l e   i n t e r r u p t   * /  
     N V I C _ E n a b l e I R Q ( I R Q n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   N V I C   i n t e r r u p t   c o n t r o l l e r .  
     *   @ p a r a m     I R Q n   E x t e r n a l   i n t e r r u p t   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n   e n u m e r a t o r   o f   I R Q n _ T y p e   e n u m e r a t i o n  
     *                   ( F o r   t h e   c o m p l e t e   S T M 3 2   D e v i c e s   I R Q   C h a n n e l s   l i s t ,   p l e a s e   r e f e r   t o   t h e   a p p r o p r i a t e   C M S I S   d e v i c e   f i l e   ( s t m 3 2 f 1 0 x x x . h ) )      
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ N V I C _ D i s a b l e I R Q ( I R Q n _ T y p e   I R Q n )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ D E V I C E _ I R Q ( I R Q n ) ) ;  
  
     / *   D i s a b l e   i n t e r r u p t   * /  
     N V I C _ D i s a b l e I R Q ( I R Q n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a t e s   a   s y s t e m   r e s e t   r e q u e s t   t o   r e s e t   t h e   M C U .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ N V I C _ S y s t e m R e s e t ( v o i d )  
 {  
     / *   S y s t e m   R e s e t   * /  
     N V I C _ S y s t e m R e s e t ( ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   S y s t e m   T i m e r   a n d   i t s   i n t e r r u p t ,   a n d   s t a r t s   t h e   S y s t e m   T i c k   T i m e r .  
     *                   C o u n t e r   i s   i n   f r e e   r u n n i n g   m o d e   t o   g e n e r a t e   p e r i o d i c   i n t e r r u p t s .  
     *   @ p a r a m     T i c k s N u m b :   S p e c i f i e s   t h e   t i c k s   N u m b e r   o f   t i c k s   b e t w e e n   t w o   i n t e r r u p t s .  
     *   @ r e t v a l   s t a t u s :     -   0     F u n c t i o n   s u c c e e d e d .  
     *                                     -   1     F u n c t i o n   f a i l e d .  
     * /  
 u i n t 3 2 _ t   H A L _ S Y S T I C K _ C o n f i g ( u i n t 3 2 _ t   T i c k s N u m b )  
 {  
       r e t u r n   S y s T i c k _ C o n f i g ( T i c k s N u m b ) ;  
 }  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C O R T E X _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       C o r t e x   c o n t r o l   f u n c t i o n s    
     *  
 @ v e r b a t i m        
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   C O R T E X  
             ( N V I C ,   S Y S T I C K ,   M P U )   f u n c t i o n a l i t i e s .    
    
              
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 # i f   ( _ _ M P U _ P R E S E N T   = =   1 U )  
 / * *  
     *   @ b r i e f     D i s a b l e s   t h e   M P U  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ M P U _ D i s a b l e ( v o i d )  
 {  
     / *   M a k e   s u r e   o u t s t a n d i n g   t r a n s f e r s   a r e   d o n e   * /  
     _ _ D M B ( ) ;  
  
     / *   D i s a b l e   f a u l t   e x c e p t i o n s   * /  
     S C B - > S H C S R   & =   ~ S C B _ S H C S R _ M E M F A U L T E N A _ M s k ;  
      
     / *   D i s a b l e   t h e   M P U   a n d   c l e a r   t h e   c o n t r o l   r e g i s t e r * /  
     M P U - > C T R L   =   0 U ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   M P U .  
     *   @ p a r a m     M P U _ C o n t r o l :   S p e c i f i e s   t h e   c o n t r o l   m o d e   o f   t h e   M P U   d u r i n g   h a r d   f a u l t ,    
     *                     N M I ,   F A U L T M A S K   a n d   p r i v i l e g e d   a c c e s s   t o   t h e   d e f a u l t   m e m o r y    
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   M P U _ H F N M I _ P R I V D E F _ N O N E  
     *                         @ a r g   M P U _ H A R D F A U L T _ N M I  
     *                         @ a r g   M P U _ P R I V I L E G E D _ D E F A U L T  
     *                         @ a r g   M P U _ H F N M I _ P R I V D E F  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ M P U _ E n a b l e ( u i n t 3 2 _ t   M P U _ C o n t r o l )  
 {  
     / *   E n a b l e   t h e   M P U   * /  
     M P U - > C T R L   =   M P U _ C o n t r o l   |   M P U _ C T R L _ E N A B L E _ M s k ;  
      
     / *   E n a b l e   f a u l t   e x c e p t i o n s   * /  
     S C B - > S H C S R   | =   S C B _ S H C S R _ M E M F A U L T E N A _ M s k ;  
      
     / *   E n s u r e   M P U   s e t t i n g   t a k e   e f f e c t s   * /  
     _ _ D S B ( ) ;  
     _ _ I S B ( ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   a n d   c o n f i g u r e s   t h e   R e g i o n   a n d   t h e   m e m o r y   t o   b e   p r o t e c t e d .  
     *   @ p a r a m     M P U _ I n i t :   P o i n t e r   t o   a   M P U _ R e g i o n _ I n i t T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   i n i t i a l i z a t i o n   a n d   c o n f i g u r a t i o n   i n f o r m a t i o n .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ M P U _ C o n f i g R e g i o n ( M P U _ R e g i o n _ I n i t T y p e D e f   * M P U _ I n i t )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ M P U _ R E G I O N _ N U M B E R ( M P U _ I n i t - > N u m b e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ M P U _ R E G I O N _ E N A B L E ( M P U _ I n i t - > E n a b l e ) ) ;  
  
     / *   S e t   t h e   R e g i o n   n u m b e r   * /  
     M P U - > R N R   =   M P U _ I n i t - > N u m b e r ;  
  
     i f   ( ( M P U _ I n i t - > E n a b l e )   ! =   R E S E T )  
     {  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ M P U _ I N S T R U C T I O N _ A C C E S S ( M P U _ I n i t - > D i s a b l e E x e c ) ) ;  
         a s s e r t _ p a r a m ( I S _ M P U _ R E G I O N _ P E R M I S S I O N _ A T T R I B U T E ( M P U _ I n i t - > A c c e s s P e r m i s s i o n ) ) ;  
         a s s e r t _ p a r a m ( I S _ M P U _ T E X _ L E V E L ( M P U _ I n i t - > T y p e E x t F i e l d ) ) ;  
         a s s e r t _ p a r a m ( I S _ M P U _ A C C E S S _ S H A R E A B L E ( M P U _ I n i t - > I s S h a r e a b l e ) ) ;  
         a s s e r t _ p a r a m ( I S _ M P U _ A C C E S S _ C A C H E A B L E ( M P U _ I n i t - > I s C a c h e a b l e ) ) ;  
         a s s e r t _ p a r a m ( I S _ M P U _ A C C E S S _ B U F F E R A B L E ( M P U _ I n i t - > I s B u f f e r a b l e ) ) ;  
         a s s e r t _ p a r a m ( I S _ M P U _ S U B _ R E G I O N _ D I S A B L E ( M P U _ I n i t - > S u b R e g i o n D i s a b l e ) ) ;  
         a s s e r t _ p a r a m ( I S _ M P U _ R E G I O N _ S I Z E ( M P U _ I n i t - > S i z e ) ) ;  
          
         M P U - > R B A R   =   M P U _ I n i t - > B a s e A d d r e s s ;  
         M P U - > R A S R   =   ( ( u i n t 3 2 _ t ) M P U _ I n i t - > D i s a b l e E x e c                           < <   M P U _ R A S R _ X N _ P o s )       |  
                                 ( ( u i n t 3 2 _ t ) M P U _ I n i t - > A c c e s s P e r m i s s i o n                 < <   M P U _ R A S R _ A P _ P o s )       |  
                                 ( ( u i n t 3 2 _ t ) M P U _ I n i t - > T y p e E x t F i e l d                         < <   M P U _ R A S R _ T E X _ P o s )     |  
                                 ( ( u i n t 3 2 _ t ) M P U _ I n i t - > I s S h a r e a b l e                           < <   M P U _ R A S R _ S _ P o s )         |  
                                 ( ( u i n t 3 2 _ t ) M P U _ I n i t - > I s C a c h e a b l e                           < <   M P U _ R A S R _ C _ P o s )         |  
                                 ( ( u i n t 3 2 _ t ) M P U _ I n i t - > I s B u f f e r a b l e                         < <   M P U _ R A S R _ B _ P o s )         |  
                                 ( ( u i n t 3 2 _ t ) M P U _ I n i t - > S u b R e g i o n D i s a b l e                 < <   M P U _ R A S R _ S R D _ P o s )     |  
                                 ( ( u i n t 3 2 _ t ) M P U _ I n i t - > S i z e                                         < <   M P U _ R A S R _ S I Z E _ P o s )   |  
                                 ( ( u i n t 3 2 _ t ) M P U _ I n i t - > E n a b l e                                     < <   M P U _ R A S R _ E N A B L E _ P o s ) ;  
     }  
     e l s e  
     {  
         M P U - > R B A R   =   0 x 0 0 U ;  
         M P U - > R A S R   =   0 x 0 0 U ;  
     }  
 }  
 # e n d i f   / *   _ _ M P U _ P R E S E N T   * /  
  
 / * *  
     *   @ b r i e f     G e t s   t h e   p r i o r i t y   g r o u p i n g   f i e l d   f r o m   t h e   N V I C   I n t e r r u p t   C o n t r o l l e r .  
     *   @ r e t v a l   P r i o r i t y   g r o u p i n g   f i e l d   ( S C B - > A I R C R   [ 1 0 : 8 ]   P R I G R O U P   f i e l d )  
     * /  
 u i n t 3 2 _ t   H A L _ N V I C _ G e t P r i o r i t y G r o u p i n g ( v o i d )  
 {  
     / *   G e t   t h e   P R I G R O U P [ 1 0 : 8 ]   f i e l d   v a l u e   * /  
     r e t u r n   N V I C _ G e t P r i o r i t y G r o u p i n g ( ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   t h e   p r i o r i t y   o f   a n   i n t e r r u p t .  
     *   @ p a r a m     I R Q n :   E x t e r n a l   i n t e r r u p t   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n   e n u m e r a t o r   o f   I R Q n _ T y p e   e n u m e r a t i o n  
     *                   ( F o r   t h e   c o m p l e t e   S T M 3 2   D e v i c e s   I R Q   C h a n n e l s   l i s t ,   p l e a s e   r e f e r   t o   t h e   a p p r o p r i a t e   C M S I S   d e v i c e   f i l e   ( s t m 3 2 f 1 0 x x x . h ) )  
     *   @ p a r a m       P r i o r i t y G r o u p :   t h e   p r i o r i t y   g r o u p i n g   b i t s   l e n g t h .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   N V I C _ P R I O R I T Y G R O U P _ 0 :   0   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                             4   b i t s   f o r   s u b p r i o r i t y  
     *                       @ a r g   N V I C _ P R I O R I T Y G R O U P _ 1 :   1   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                             3   b i t s   f o r   s u b p r i o r i t y  
     *                       @ a r g   N V I C _ P R I O R I T Y G R O U P _ 2 :   2   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                             2   b i t s   f o r   s u b p r i o r i t y  
     *                       @ a r g   N V I C _ P R I O R I T Y G R O U P _ 3 :   3   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                             1   b i t s   f o r   s u b p r i o r i t y  
     *                       @ a r g   N V I C _ P R I O R I T Y G R O U P _ 4 :   4   b i t s   f o r   p r e e m p t i o n   p r i o r i t y  
     *                                                                             0   b i t s   f o r   s u b p r i o r i t y  
     *   @ p a r a m     p P r e e m p t P r i o r i t y :   P o i n t e r   o n   t h e   P r e e m p t i v e   p r i o r i t y   v a l u e   ( s t a r t i n g   f r o m   0 ) .  
     *   @ p a r a m     p S u b P r i o r i t y :   P o i n t e r   o n   t h e   S u b p r i o r i t y   v a l u e   ( s t a r t i n g   f r o m   0 ) .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ N V I C _ G e t P r i o r i t y ( I R Q n _ T y p e   I R Q n ,   u i n t 3 2 _ t   P r i o r i t y G r o u p ,   u i n t 3 2 _ t   * p P r e e m p t P r i o r i t y ,   u i n t 3 2 _ t   * p S u b P r i o r i t y )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ P R I O R I T Y _ G R O U P ( P r i o r i t y G r o u p ) ) ;  
   / *   G e t   p r i o r i t y   f o r   C o r t e x - M   s y s t e m   o r   d e v i c e   s p e c i f i c   i n t e r r u p t s   * /  
     N V I C _ D e c o d e P r i o r i t y ( N V I C _ G e t P r i o r i t y ( I R Q n ) ,   P r i o r i t y G r o u p ,   p P r e e m p t P r i o r i t y ,   p S u b P r i o r i t y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t s   P e n d i n g   b i t   o f   a n   e x t e r n a l   i n t e r r u p t .  
     *   @ p a r a m     I R Q n   E x t e r n a l   i n t e r r u p t   n u m b e r  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n   e n u m e r a t o r   o f   I R Q n _ T y p e   e n u m e r a t i o n  
     *                   ( F o r   t h e   c o m p l e t e   S T M 3 2   D e v i c e s   I R Q   C h a n n e l s   l i s t ,   p l e a s e   r e f e r   t o   t h e   a p p r o p r i a t e   C M S I S   d e v i c e   f i l e   ( s t m 3 2 f 1 0 x x x . h ) )      
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ N V I C _ S e t P e n d i n g I R Q ( I R Q n _ T y p e   I R Q n )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ D E V I C E _ I R Q ( I R Q n ) ) ;  
      
     / *   S e t   i n t e r r u p t   p e n d i n g   * /  
     N V I C _ S e t P e n d i n g I R Q ( I R Q n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   P e n d i n g   I n t e r r u p t   ( r e a d s   t h e   p e n d i n g   r e g i s t e r   i n   t h e   N V I C    
     *                   a n d   r e t u r n s   t h e   p e n d i n g   b i t   f o r   t h e   s p e c i f i e d   i n t e r r u p t ) .  
     *   @ p a r a m     I R Q n   E x t e r n a l   i n t e r r u p t   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n   e n u m e r a t o r   o f   I R Q n _ T y p e   e n u m e r a t i o n  
     *                   ( F o r   t h e   c o m p l e t e   S T M 3 2   D e v i c e s   I R Q   C h a n n e l s   l i s t ,   p l e a s e   r e f e r   t o   t h e   a p p r o p r i a t e   C M S I S   d e v i c e   f i l e   ( s t m 3 2 f 1 0 x x x . h ) )      
     *   @ r e t v a l   s t a t u s :   -   0     I n t e r r u p t   s t a t u s   i s   n o t   p e n d i n g .  
     *                                   -   1     I n t e r r u p t   s t a t u s   i s   p e n d i n g .  
     * /  
 u i n t 3 2 _ t   H A L _ N V I C _ G e t P e n d i n g I R Q ( I R Q n _ T y p e   I R Q n )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ D E V I C E _ I R Q ( I R Q n ) ) ;  
  
     / *   R e t u r n   1   i f   p e n d i n g   e l s e   0   * /  
     r e t u r n   N V I C _ G e t P e n d i n g I R Q ( I R Q n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r s   t h e   p e n d i n g   b i t   o f   a n   e x t e r n a l   i n t e r r u p t .  
     *   @ p a r a m     I R Q n   E x t e r n a l   i n t e r r u p t   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n   e n u m e r a t o r   o f   I R Q n _ T y p e   e n u m e r a t i o n  
     *                   ( F o r   t h e   c o m p l e t e   S T M 3 2   D e v i c e s   I R Q   C h a n n e l s   l i s t ,   p l e a s e   r e f e r   t o   t h e   a p p r o p r i a t e   C M S I S   d e v i c e   f i l e   ( s t m 3 2 f 1 0 x x x . h ) )      
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ N V I C _ C l e a r P e n d i n g I R Q ( I R Q n _ T y p e   I R Q n )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ D E V I C E _ I R Q ( I R Q n ) ) ;  
  
     / *   C l e a r   p e n d i n g   i n t e r r u p t   * /  
     N V I C _ C l e a r P e n d i n g I R Q ( I R Q n ) ;  
 }  
  
 / * *  
     *   @ b r i e f   G e t s   a c t i v e   i n t e r r u p t   (   r e a d s   t h e   a c t i v e   r e g i s t e r   i n   N V I C   a n d   r e t u r n s   t h e   a c t i v e   b i t ) .  
     *   @ p a r a m   I R Q n   E x t e r n a l   i n t e r r u p t   n u m b e r  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n   e n u m e r a t o r   o f   I R Q n _ T y p e   e n u m e r a t i o n  
     *                   ( F o r   t h e   c o m p l e t e   S T M 3 2   D e v i c e s   I R Q   C h a n n e l s   l i s t ,   p l e a s e   r e f e r   t o   t h e   a p p r o p r i a t e   C M S I S   d e v i c e   f i l e   ( s t m 3 2 f 1 0 x x x . h ) )      
     *   @ r e t v a l   s t a t u s :   -   0     I n t e r r u p t   s t a t u s   i s   n o t   p e n d i n g .  
     *                                   -   1     I n t e r r u p t   s t a t u s   i s   p e n d i n g .  
     * /  
 u i n t 3 2 _ t   H A L _ N V I C _ G e t A c t i v e ( I R Q n _ T y p e   I R Q n )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ N V I C _ D E V I C E _ I R Q ( I R Q n ) ) ;  
  
     / *   R e t u r n   1   i f   a c t i v e   e l s e   0   * /  
     r e t u r n   N V I C _ G e t A c t i v e ( I R Q n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   S y s T i c k   c l o c k   s o u r c e .  
     *   @ p a r a m     C L K S o u r c e :   s p e c i f i e s   t h e   S y s T i c k   c l o c k   s o u r c e .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                           @ a r g   S Y S T I C K _ C L K S O U R C E _ H C L K _ D I V 8 :   A H B   c l o c k   d i v i d e d   b y   8   s e l e c t e d   a s   S y s T i c k   c l o c k   s o u r c e .  
     *                           @ a r g   S Y S T I C K _ C L K S O U R C E _ H C L K :   A H B   c l o c k   s e l e c t e d   a s   S y s T i c k   c l o c k   s o u r c e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ S Y S T I C K _ C L K S o u r c e C o n f i g ( u i n t 3 2 _ t   C L K S o u r c e )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S Y S T I C K _ C L K _ S O U R C E ( C L K S o u r c e ) ) ;  
     i f   ( C L K S o u r c e   = =   S Y S T I C K _ C L K S O U R C E _ H C L K )  
     {  
         S y s T i c k - > C T R L   | =   S Y S T I C K _ C L K S O U R C E _ H C L K ;  
     }  
     e l s e  
     {  
         S y s T i c k - > C T R L   & =   ~ S Y S T I C K _ C L K S O U R C E _ H C L K ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   S Y S T I C K   i n t e r r u p t   r e q u e s t .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ S Y S T I C K _ I R Q H a n d l e r ( v o i d )  
 {  
     H A L _ S Y S T I C K _ C a l l b a c k ( ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S Y S T I C K   c a l l b a c k .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S Y S T I C K _ C a l l b a c k ( v o i d )  
 {  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S Y S T I C K _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
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
 # e n d i f   / *   H A L _ C O R T E X _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  