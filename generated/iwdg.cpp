namespace target {
  namespace iwdg {
    
    /**
      Key register
    */
    namespace KR {
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
          Gets Key value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getKEY() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Key value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setKEY(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Prescaler register
    */
    namespace PR {
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
          Gets Prescaler divider
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPR() volatile {
          return ((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Prescaler divider
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setPR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Reload register
    */
    namespace RLR {
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
          Gets Watchdog counter reload value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getRL() volatile {
          return ((raw & (0xFFF << 0)) >> 0);
        }
        /**
          Sets Watchdog counter reload value
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setRL(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((((value)) << 0) & (0xFFF << 0));
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
          Gets Watchdog prescaler value update
          @return boolean value
        */
        __attribute__((always_inline)) bool getPVU() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Watchdog prescaler value update
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPVU(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Watchdog counter reload value update
          @return boolean value
        */
        __attribute__((always_inline)) bool getRVU() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Watchdog counter reload value update
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRVU(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Watchdog counter window value update
          @return boolean value
        */
        __attribute__((always_inline)) bool getWVU() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Watchdog counter window value update
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWVU(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Window register
    */
    namespace WINR {
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
          Gets Watchdog counter window value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getWIN() volatile {
          return ((raw & (0xFFF << 0)) >> 0);
        }
        /**
          Sets Watchdog counter window value
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setWIN(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((((value)) << 0) & (0xFFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Key register
          */
          KR::Register KR;
        };
        struct {
          char _space_PR[0x4];
          /**
            Prescaler register
          */
          PR::Register PR;
        };
        struct {
          char _space_RLR[0x8];
          /**
            Reload register
          */
          RLR::Register RLR;
        };
        struct {
          char _space_SR[0xc];
          /**
            Status register
          */
          SR::Register SR;
        };
        struct {
          char _space_WINR[0x10];
          /**
            Window register
          */
          WINR::Register WINR;
        };
      };
    };
  }
  
  extern volatile iwdg::Peripheral IWDG;
}