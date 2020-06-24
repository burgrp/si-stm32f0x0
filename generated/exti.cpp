namespace target {
  namespace exti {
    
    /**
      Interrupt mask register (EXTI_IMR)
    */
    namespace IMR {
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
          Gets Interrupt Mask on line 0
          @param index in range 0..27
          @return boolean value
        */
        __attribute__((always_inline)) bool getMR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Interrupt Mask on line 0
          @param index in range 0..27
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Event mask register (EXTI_EMR)
    */
    namespace EMR {
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
          Gets Event Mask on line 0
          @param index in range 0..27
          @return boolean value
        */
        __attribute__((always_inline)) bool getMR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Event Mask on line 0
          @param index in range 0..27
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Rising Trigger selection register (EXTI_RTSR)
    */
    namespace RTSR {
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
          Gets Rising trigger event configuration of line 0
          @param index in range 0..19
          @return boolean value
        */
        __attribute__((always_inline)) bool getTR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Rising trigger event configuration of line 0
          @param index in range 0..19
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Falling Trigger selection register (EXTI_FTSR)
    */
    namespace FTSR {
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
          Gets Falling trigger event configuration of line 0
          @param index in range 0..19
          @return boolean value
        */
        __attribute__((always_inline)) bool getTR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Falling trigger event configuration of line 0
          @param index in range 0..19
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Software interrupt event register (EXTI_SWIER)
    */
    namespace SWIER {
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
          Gets Software Interrupt on line 0
          @param index in range 0..19
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWIER(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Software Interrupt on line 0
          @param index in range 0..19
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWIER(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Pending register (EXTI_PR)
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
          Gets Pending bit 0
          @param index in range 0..19
          @return boolean value
        */
        __attribute__((always_inline)) bool getPR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Pending bit 0
          @param index in range 0..19
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPR(int index, bool value) volatile {
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
            Interrupt mask register (EXTI_IMR)
          */
          IMR::Register IMR;
        };
        struct {
          char _space_EMR[0x4];
          /**
            Event mask register (EXTI_EMR)
          */
          EMR::Register EMR;
        };
        struct {
          char _space_RTSR[0x8];
          /**
            Rising Trigger selection register (EXTI_RTSR)
          */
          RTSR::Register RTSR;
        };
        struct {
          char _space_FTSR[0xc];
          /**
            Falling Trigger selection register (EXTI_FTSR)
          */
          FTSR::Register FTSR;
        };
        struct {
          char _space_SWIER[0x10];
          /**
            Software interrupt event register (EXTI_SWIER)
          */
          SWIER::Register SWIER;
        };
        struct {
          char _space_PR[0x14];
          /**
            Pending register (EXTI_PR)
          */
          PR::Register PR;
        };
      };
    };
  }
  
  extern volatile exti::Peripheral EXTI;
}