??# i n c l u d e   " s t m 3 2 f 1 0 x . h "                                     / /   D e v i c e   h e a d e r  
 # i n c l u d e   " D e l a y . h "  
  
 v o i d   K e y _ I n i t ( v o i d )  
 {  
 	 R C C _ A P B 2 P e r i p h C l o c k C m d ( R C C _ A P B 2 P e r i p h _ G P I O B ,   E N A B L E ) ;  
 	  
 	 G P I O _ I n i t T y p e D e f   G P I O _ I n i t S t r u c t u r e ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ M o d e   =   G P I O _ M o d e _ I P U ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ P i n   =   G P I O _ P i n _ 1   |   G P I O _ P i n _ 1 1 ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ S p e e d   =   G P I O _ S p e e d _ 5 0 M H z ;  
 	 G P I O _ I n i t ( G P I O B ,   & G P I O _ I n i t S t r u c t u r e ) ;  
 }  
  
 u i n t 8 _ t   K e y _ G e t N u m ( v o i d )  
 {  
 	 u i n t 8 _ t   K e y N u m   =   0 ;  
 	 i f   ( G P I O _ R e a d I n p u t D a t a B i t ( G P I O B ,   G P I O _ P i n _ 1 )   = =   0 )  
 	 {  
 	 	 D e l a y _ m s ( 2 0 ) ;  
 	 	 w h i l e   ( G P I O _ R e a d I n p u t D a t a B i t ( G P I O B ,   G P I O _ P i n _ 1 )   = =   0 ) ;  
 	 	 D e l a y _ m s ( 2 0 ) ;  
 	 	 K e y N u m   =   1 ;  
 	 }  
 	 i f   ( G P I O _ R e a d I n p u t D a t a B i t ( G P I O B ,   G P I O _ P i n _ 1 1 )   = =   0 )  
 	 {  
 	 	 D e l a y _ m s ( 2 0 ) ;  
 	 	 w h i l e   ( G P I O _ R e a d I n p u t D a t a B i t ( G P I O B ,   G P I O _ P i n _ 1 1 )   = =   0 ) ;  
 	 	 D e l a y _ m s ( 2 0 ) ;  
 	 	 K e y N u m   =   2 ;  
 	 }  
 	  
 	 r e t u r n   K e y N u m ;  
 }  