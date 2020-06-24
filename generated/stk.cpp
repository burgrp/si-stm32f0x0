namespace target {
  namespace stk {
    
    /**
      SysTick control and status register
    */
    namespace CSR {
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
          Gets Counter enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Counter enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets SysTick exception request enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTICKINT() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets SysTick exception request enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTICKINT(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Clock source selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getCLKSOURCE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Clock source selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCLKSOURCE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets COUNTFLAG
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOUNTFLAG() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets COUNTFLAG
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOUNTFLAG(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      SysTick reload value register
    */
    namespace RVR {
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
          Gets RELOAD value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getRELOAD() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets RELOAD value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setRELOAD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      SysTick current value register
    */
    namespace CVR {
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
          Gets Current counter value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCURRENT() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Current counter value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setCURRENT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      SysTick calibration value register
    */
    namespace CALIB {
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
          Gets Calibration value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getTENMS() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Calibration value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setTENMS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
        /**
          Gets SKEW flag: Indicates whether the TENMS value is exact
          @return boolean value
        */
        __attribute__((always_inline)) bool getSKEW() volatile {
          return ((raw & (0x1 << 30)) >> 30);
        }
        /**
          Sets SKEW flag: Indicates whether the TENMS value is exact
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSKEW(bool value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
          return *(Register*)this;
        }
        /**
          Gets NOREF flag. Reads as zero
          @return boolean value
        */
        __attribute__((always_inline)) bool getNOREF() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets NOREF flag. Reads as zero
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNOREF(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            SysTick control and status register
          */
          CSR::Register CSR;
        };
        struct {
          char _space_RVR[0x4];
          /**
            SysTick reload value register
          */
          RVR::Register RVR;
        };
        struct {
          char _space_CVR[0x8];
          /**
            SysTick current value register
          */
          CVR::Register CVR;
        };
        struct {
          char _space_CALIB[0xc];
          /**
            SysTick calibration value register
          */
          CALIB::Register CALIB;
        };
      };
    };
  }
  
  extern volatile stk::Peripheral STK;
}