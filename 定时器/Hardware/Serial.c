??# i n c l u d e   " s t m 3 2 f 1 0 x . h "                                     / /   D e v i c e   h e a d e r  
 # i n c l u d e   < s t d i o . h >  
 # i n c l u d e   < s t d a r g . h >  
  
 u i n t 8 _ t   S e r i a l _ R x D a t a ;  
 u i n t 8 _ t   S e r i a l _ R x F l a g ;  
  
 v o i d   S e r i a l _ I n i t ( v o i d )  
 {  
 	 R C C _ A P B 2 P e r i p h C l o c k C m d ( R C C _ A P B 2 P e r i p h _ U S A R T 1 ,   E N A B L E ) ;  
 	 R C C _ A P B 2 P e r i p h C l o c k C m d ( R C C _ A P B 2 P e r i p h _ G P I O A ,   E N A B L E ) ;  
 	  
 	 G P I O _ I n i t T y p e D e f   G P I O _ I n i t S t r u c t u r e ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ M o d e   =   G P I O _ M o d e _ A F _ P P ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ P i n   =   G P I O _ P i n _ 9 ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ S p e e d   =   G P I O _ S p e e d _ 5 0 M H z ;  
 	 G P I O _ I n i t ( G P I O A ,   & G P I O _ I n i t S t r u c t u r e ) ;  
 	  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ M o d e   =   G P I O _ M o d e _ I P U ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ P i n   =   G P I O _ P i n _ 1 0 ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ S p e e d   =   G P I O _ S p e e d _ 5 0 M H z ;  
 	 G P I O _ I n i t ( G P I O A ,   & G P I O _ I n i t S t r u c t u r e ) ;  
 	  
 	 U S A R T _ I n i t T y p e D e f   U S A R T _ I n i t S t r u c t u r e ;  
 	 U S A R T _ I n i t S t r u c t u r e . U S A R T _ B a u d R a t e   =   9 6 0 0 ;  
 	 U S A R T _ I n i t S t r u c t u r e . U S A R T _ H a r d w a r e F l o w C o n t r o l   =   U S A R T _ H a r d w a r e F l o w C o n t r o l _ N o n e ;  
 	 U S A R T _ I n i t S t r u c t u r e . U S A R T _ M o d e   =   U S A R T _ M o d e _ T x   |   U S A R T _ M o d e _ R x ;  
 	 U S A R T _ I n i t S t r u c t u r e . U S A R T _ P a r i t y   =   U S A R T _ P a r i t y _ N o ;  
 	 U S A R T _ I n i t S t r u c t u r e . U S A R T _ S t o p B i t s   =   U S A R T _ S t o p B i t s _ 1 ;  
 	 U S A R T _ I n i t S t r u c t u r e . U S A R T _ W o r d L e n g t h   =   U S A R T _ W o r d L e n g t h _ 8 b ;  
 	 U S A R T _ I n i t ( U S A R T 1 ,   & U S A R T _ I n i t S t r u c t u r e ) ;  
 	  
 	 U S A R T _ I T C o n f i g ( U S A R T 1 ,   U S A R T _ I T _ R X N E ,   E N A B L E ) ;  
 	  
 	 N V I C _ P r i o r i t y G r o u p C o n f i g ( N V I C _ P r i o r i t y G r o u p _ 2 ) ;  
 	  
 	 N V I C _ I n i t T y p e D e f   N V I C _ I n i t S t r u c t u r e ;  
 	 N V I C _ I n i t S t r u c t u r e . N V I C _ I R Q C h a n n e l   =   U S A R T 1 _ I R Q n ;  
 	 N V I C _ I n i t S t r u c t u r e . N V I C _ I R Q C h a n n e l C m d   =   E N A B L E ;  
 	 N V I C _ I n i t S t r u c t u r e . N V I C _ I R Q C h a n n e l P r e e m p t i o n P r i o r i t y   =   1 ;  
 	 N V I C _ I n i t S t r u c t u r e . N V I C _ I R Q C h a n n e l S u b P r i o r i t y   =   1 ;  
 	 N V I C _ I n i t ( & N V I C _ I n i t S t r u c t u r e ) ;  
 	  
 	 U S A R T _ C m d ( U S A R T 1 ,   E N A B L E ) ;  
 }  
  
 v o i d   S e r i a l _ S e n d B y t e ( u i n t 8 _ t   B y t e )  
 {  
 	 U S A R T _ S e n d D a t a ( U S A R T 1 ,   B y t e ) ;  
 	 w h i l e   ( U S A R T _ G e t F l a g S t a t u s ( U S A R T 1 ,   U S A R T _ F L A G _ T X E )   = =   R E S E T ) ;  
 }  
  
 v o i d   S e r i a l _ S e n d A r r a y ( u i n t 8 _ t   * A r r a y ,   u i n t 1 6 _ t   L e n g t h )  
 {  
 	 u i n t 1 6 _ t   i ;  
 	 f o r   ( i   =   0 ;   i   <   L e n g t h ;   i   + + )  
 	 {  
 	 	 S e r i a l _ S e n d B y t e ( A r r a y [ i ] ) ;  
 	 }  
 }  
  
 v o i d   S e r i a l _ S e n d S t r i n g ( c h a r   * S t r i n g )  
 {  
 	 u i n t 8 _ t   i ;  
 	 f o r   ( i   =   0 ;   S t r i n g [ i ]   ! =   ' \ 0 ' ;   i   + + )  
 	 {  
 	 	 S e r i a l _ S e n d B y t e ( S t r i n g [ i ] ) ;  
 	 }  
 }  
  
 u i n t 3 2 _ t   S e r i a l _ P o w ( u i n t 3 2 _ t   X ,   u i n t 3 2 _ t   Y )  
 {  
 	 u i n t 3 2 _ t   R e s u l t   =   1 ;  
 	 w h i l e   ( Y   - - )  
 	 {  
 	 	 R e s u l t   * =   X ;  
 	 }  
 	 r e t u r n   R e s u l t ;  
 }  
  
 v o i d   S e r i a l _ S e n d N u m b e r ( u i n t 3 2 _ t   N u m b e r ,   u i n t 8 _ t   L e n g t h )  
 {  
 	 u i n t 8 _ t   i ;  
 	 f o r   ( i   =   0 ;   i   <   L e n g t h ;   i   + + )  
 	 {  
 	 	 S e r i a l _ S e n d B y t e ( N u m b e r   /   S e r i a l _ P o w ( 1 0 ,   L e n g t h   -   i   -   1 )   %   1 0   +   ' 0 ' ) ;  
 	 }  
 }  
  
 i n t   f p u t c ( i n t   c h ,   F I L E   * f )  
 {  
 	 S e r i a l _ S e n d B y t e ( c h ) ;  
 	 r e t u r n   c h ;  
 }  
  
 v o i d   S e r i a l _ P r i n t f ( c h a r   * f o r m a t ,   . . . )  
 {  
 	 c h a r   S t r i n g [ 1 0 0 ] ;  
 	 v a _ l i s t   a r g ;  
 	 v a _ s t a r t ( a r g ,   f o r m a t ) ;  
 	 v s p r i n t f ( S t r i n g ,   f o r m a t ,   a r g ) ;  
 	 v a _ e n d ( a r g ) ;  
 	 S e r i a l _ S e n d S t r i n g ( S t r i n g ) ;  
 }  
  
 u i n t 8 _ t   S e r i a l _ G e t R x F l a g ( v o i d )  
 {  
 	 i f   ( S e r i a l _ R x F l a g   = =   1 )  
 	 {  
 	 	 S e r i a l _ R x F l a g   =   0 ;  
 	 	 r e t u r n   1 ;  
 	 }  
 	 r e t u r n   0 ;  
 }  
  
 u i n t 8 _ t   S e r i a l _ G e t R x D a t a ( v o i d )  
 {  
 	 r e t u r n   S e r i a l _ R x D a t a ;  
 }  
  
 v o i d   U S A R T 1 _ I R Q H a n d l e r ( v o i d )  
 {  
 	 i f   ( U S A R T _ G e t I T S t a t u s ( U S A R T 1 ,   U S A R T _ I T _ R X N E )   = =   S E T )  
 	 {  
 	 	 S e r i a l _ R x D a t a   =   U S A R T _ R e c e i v e D a t a ( U S A R T 1 ) ;  
 	 	 S e r i a l _ R x F l a g   =   1 ;  
 	 	 U S A R T _ C l e a r I T P e n d i n g B i t ( U S A R T 1 ,   U S A R T _ I T _ R X N E ) ;  
 	 }  
 }  