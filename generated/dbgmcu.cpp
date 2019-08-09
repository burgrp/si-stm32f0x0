namespace target {
  namespace dbgmcu {
    namespace reg {
      
      /**
        MCU Device ID Code Register
      */
      class IDCODE {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Device Identifier
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDEV_ID() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Device Identifier
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDEV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
        /**
          Gets Division Identifier
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDIV_ID() volatile {
          return (raw & (0xF << 12)) >> 12;
        }
        /**
          Sets Division Identifier
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDIV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((value << 12) & (0xF << 12));
        }
        /**
          Gets Revision Identifier
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getREV_ID() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Revision Identifier
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setREV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
      };
      
      /**
        Debug MCU Configuration Register
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
          Gets Debug Stop Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_STOP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Debug Stop Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Debug Standby Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_STANDBY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Debug Standby Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_STANDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Debug MCU APB1 freeze register
      */
      class APB1_FZ {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIM3 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIM3_STOP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets TIM3 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIM3_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets TIM6 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIM6_STOP() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets TIM6 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIM6_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets TIM7 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIM7_STOP() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets TIM7 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIM7_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets TIM14 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIM14_STOP() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets TIM14 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIM14_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Debug window watchdog stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_WWDG_STOP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Debug window watchdog stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_WWDG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Debug independent watchdog stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_IWDG_STOP() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Debug independent watchdog stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_IWDG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets SMBUS timeout mode stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_I2C1_SMBUS_TIMEOUT() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets SMBUS timeout mode stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_I2C1_SMBUS_TIMEOUT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
      };
      
      /**
        Debug MCU APB2 freeze register
      */
      class APB2_FZ {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIM1 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIM1_STOP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets TIM1 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIM1_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets TIM15 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIM15_STOP() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets TIM15 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIM15_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets TIM16 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIM16_STOP() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets TIM16 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIM16_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets TIM17 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIM17_STOP() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets TIM17 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIM17_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            MCU Device ID Code Register
          */
          volatile reg::IDCODE IDCODE;
        };
        struct {
          volatile char _space_CR[4];
          /**
            Debug MCU Configuration Register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_APB1_FZ[8];
          /**
            Debug MCU APB1 freeze register
          */
          volatile reg::APB1_FZ APB1_FZ;
        };
        struct {
          volatile char _space_APB2_FZ[12];
          /**
            Debug MCU APB2 freeze register
          */
          volatile reg::APB2_FZ APB2_FZ;
        };
      };
    };
  }
  
  extern dbgmcu::Peripheral DBGMCU;
}