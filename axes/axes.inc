// Include
#include "colors.inc"
#include "stones.inc"
  
// Axes - declaration
#declare Axe =
union {
    object {   
        cylinder { // X
            <-10, 0, 0>,     // Center of one end
            <10, 0, 0>,     // Center of other end
            0.1            // Radius
        }
    }
    object {   
        cone {
            <10, 0, 0>, 0.4   // Center and radius of one end
            <11, 0, 0>, 0    // Center and radius of other end
        }
    }
}
       
#declare axes = merge {
    // Axe X
    object { 
        Axe
        texture { 
        	pigment { color Red } 
        }
    }
    text {
        ttf "timrom.ttf" "X+" 0.1, 0
        translate < 8, 0.2, 0>
        pigment { Red }
    }
         
    // Axe Y
    object { 
      	Axe
        rotate <0, 0, 90>
        texture { 
        	pigment { color Green } 
        }    
    }
    text {
        ttf "timrom.ttf" "Y+" 0.1, 0
        translate < 0.2, 8, 0>    
        pigment { Green }
    }
        
    // Axe Z
    object { 
        Axe
        rotate <0, -90, 0>
        texture { 
        	pigment { color Blue } 
        }    
    }
    text {
        ttf "timrom.ttf" "Z+" 0.1, 0
        translate < -0.5, 0.5, 8>
        pigment { Blue }
    }
}