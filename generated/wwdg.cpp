namespace target {
  namespace wwdg {
    namespace reg {
      
      /**
        Control register
      */
      class CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Activation bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWDGA() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Activation bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWDGA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets 7-bit counter
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getT() volatile {
          return (raw & (0x7F << 0)) >> 0;
        }
        /**
          Sets 7-bit counter
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setT(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
        }
      };
      
      /**
        Configuration register
      */
      class CFR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Early wakeup interrupt
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEWI() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Early wakeup interrupt
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEWI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Timer base
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWDGTB() volatile {
          return (raw & (0x3 << 7)) >> 7;
        }
        /**
          Sets Timer base
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setWDGTB(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 7)) | ((value << 7) & (0x3 << 7));
        }
        /**
          Gets 7-bit window value
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getW() volatile {
          return (raw & (0x7F << 0)) >> 0;
        }
        /**
          Sets 7-bit window value
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setW(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
        }
      };
      
      /**
        Status register
      */
      class SR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Early wakeup interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEWIF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Early wakeup interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEWIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_CFR[4];
          /**
            Configuration register
          */
          volatile reg::CFR CFR;
        };
        struct {
          volatile char _space_SR[8];
          /**
            Status register
          */
          volatile reg::SR SR;
        };
      };
    };
  }
  
  extern wwdg::Peripheral WWDG;
}