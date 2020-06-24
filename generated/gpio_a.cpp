namespace target {
  namespace gpio_a {
    
    /**
      GPIO port mode register
    */
    namespace MODER {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMODER(int index) volatile {
          return ((raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0)));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMODER(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((((value)) << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO port output type register
    */
    namespace OTYPER {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getOT(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO port output speed register
    */
    namespace OSPEEDR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOSPEEDR(int index) volatile {
          return ((raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0)));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setOSPEEDR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((((value)) << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO port pull-up/pull-down register
    */
    namespace PUPDR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPUPDR(int index) volatile {
          return ((raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0)));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPUPDR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((((value)) << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO port input data register
    */
    namespace IDR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port input data (y = 0..15)
          @param index in range 0..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getIDR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Port input data (y = 0..15)
          @param index in range 0..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIDR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO port output data register
    */
    namespace ODR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port output data (y = 0..15)
          @param index in range 0..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getODR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Port output data (y = 0..15)
          @param index in range 0..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setODR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO port bit set/reset register
    */
    namespace BSRR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getBR(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getBS(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBS(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO port configuration lock register
    */
    namespace LCKR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port x lock bit y (y= 0..15)
          @param index in range 0..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getLCK(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Port x lock bit y (y= 0..15)
          @param index in range 0..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLCK(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Port x lock bit y (y= 0..15)
          @return boolean value
        */
        __attribute__((always_inline)) bool getLCKK() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Port x lock bit y (y= 0..15)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLCKK(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO alternate function low register
    */
    namespace AFRL {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Alternate function selection for port x bit y (y = 0..7)
          @param index in range 0..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getAFRL(int index) volatile {
          return ((raw & (0xF << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0)));
        }
        /**
          Sets Alternate function selection for port x bit y (y = 0..7)
          @param index in range 0..7
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setAFRL(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 0)))) | ((((value)) << (0 + 4 * (index - 0))) & (0xF << (0 + 4 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      GPIO alternate function high register
    */
    namespace AFRH {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Alternate function selection for port x bit y (y = 8..15)
          @param index in range 8..15
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getAFRH(int index) volatile {
          return ((raw & (0xF << (0 + 4 * (index - 8)))) >> (0 + 4 * (index - 8)));
        }
        /**
          Sets Alternate function selection for port x bit y (y = 8..15)
          @param index in range 8..15
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setAFRH(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 8)))) | ((((value)) << (0 + 4 * (index - 8))) & (0xF << (0 + 4 * (index - 8))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Port bit reset register
    */
    namespace BRR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Port x Reset bit y
          @param index in range 0..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getBR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Port x Reset bit y
          @param index in range 0..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            GPIO port mode register
          */
          MODER::Register MODER;
        };
        struct {
          char _space_OTYPER[0x4];
          /**
            GPIO port output type register
          */
          OTYPER::Register OTYPER;
        };
        struct {
          char _space_OSPEEDR[0x8];
          /**
            GPIO port output speed register
          */
          OSPEEDR::Register OSPEEDR;
        };
        struct {
          char _space_PUPDR[0xc];
          /**
            GPIO port pull-up/pull-down register
          */
          PUPDR::Register PUPDR;
        };
        struct {
          char _space_IDR[0x10];
          /**
            GPIO port input data register
          */
          IDR::Register IDR;
        };
        struct {
          char _space_ODR[0x14];
          /**
            GPIO port output data register
          */
          ODR::Register ODR;
        };
        struct {
          char _space_BSRR[0x18];
          /**
            GPIO port bit set/reset register
          */
          BSRR::Register BSRR;
        };
        struct {
          char _space_LCKR[0x1c];
          /**
            GPIO port configuration lock register
          */
          LCKR::Register LCKR;
        };
        struct {
          char _space_AFRL[0x20];
          /**
            GPIO alternate function low register
          */
          AFRL::Register AFRL;
        };
        struct {
          char _space_AFRH[0x24];
          /**
            GPIO alternate function high register
          */
          AFRH::Register AFRH;
        };
        struct {
          char _space_BRR[0x28];
          /**
            Port bit reset register
          */
          BRR::Register BRR;
        };
      };
    };
  }
  
  extern volatile gpio_a::Peripheral GPIOA;
}