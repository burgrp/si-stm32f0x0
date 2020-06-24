namespace target {
  namespace wwdg {
    
    /**
      Control register
    */
    namespace CR {
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
          Gets Activation bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getWDGA() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Activation bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWDGA(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets 7-bit counter
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getT() volatile {
          return ((raw & (0x7F << 0)) >> 0);
        }
        /**
          Sets 7-bit counter
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setT(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((((value)) << 0) & (0x7F << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Configuration register
    */
    namespace CFR {
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
          Gets Early wakeup interrupt
          @return boolean value
        */
        __attribute__((always_inline)) bool getEWI() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Early wakeup interrupt
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEWI(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Timer base
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWDGTB() volatile {
          return ((raw & (0x3 << 7)) >> 7);
        }
        /**
          Sets Timer base
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setWDGTB(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 7)) | ((((value)) << 7) & (0x3 << 7));
          return *(Register*)this;
        }
        /**
          Gets 7-bit window value
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getW() volatile {
          return ((raw & (0x7F << 0)) >> 0);
        }
        /**
          Sets 7-bit window value
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setW(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((((value)) << 0) & (0x7F << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Status register
    */
    namespace SR {
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
          Gets Early wakeup interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getEWIF() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Early wakeup interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEWIF(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Control register
          */
          CR::Register CR;
        };
        struct {
          char _space_CFR[0x4];
          /**
            Configuration register
          */
          CFR::Register CFR;
        };
        struct {
          char _space_SR[0x8];
          /**
            Status register
          */
          SR::Register SR;
        };
      };
    };
  }
  
  extern volatile wwdg::Peripheral WWDG;
}