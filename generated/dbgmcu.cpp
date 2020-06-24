namespace target {
  namespace dbgmcu {
    
    /**
      MCU Device ID Code Register
    */
    namespace IDCODE {
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
          Gets Device Identifier
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDEV_ID() volatile {
          return ((raw & (0xFFF << 0)) >> 0);
        }
        /**
          Sets Device Identifier
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setDEV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((((value)) << 0) & (0xFFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Division Identifier
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDIV_ID() volatile {
          return ((raw & (0xF << 12)) >> 12);
        }
        /**
          Sets Division Identifier
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDIV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((((value)) << 12) & (0xF << 12));
          return *(Register*)this;
        }
        /**
          Gets Revision Identifier
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getREV_ID() volatile {
          return ((raw & (0xFFFF << 16)) >> 16);
        }
        /**
          Sets Revision Identifier
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setREV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((((value)) << 16) & (0xFFFF << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Debug MCU Configuration Register
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
          Gets Debug Stop Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_STOP() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Debug Stop Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Debug Standby Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_STANDBY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Debug Standby Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_STANDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Debug MCU APB1 freeze register
    */
    namespace APB1_FZ {
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
          Gets TIM3 counter stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_TIM3_STOP() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets TIM3 counter stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_TIM3_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets TIM6 counter stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_TIM6_STOP() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets TIM6 counter stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_TIM6_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets TIM7 counter stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_TIM7_STOP() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets TIM7 counter stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_TIM7_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets TIM14 counter stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_TIM14_STOP() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets TIM14 counter stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_TIM14_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Debug window watchdog stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_WWDG_STOP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Debug window watchdog stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_WWDG_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Debug independent watchdog stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_IWDG_STOP() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Debug independent watchdog stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_IWDG_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets SMBUS timeout mode stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_I2C1_SMBUS_TIMEOUT() volatile {
          return ((raw & (0x1 << 21)) >> 21);
        }
        /**
          Sets SMBUS timeout mode stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_I2C1_SMBUS_TIMEOUT(bool value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((((value)) << 21) & (0x1 << 21));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Debug MCU APB2 freeze register
    */
    namespace APB2_FZ {
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
          Gets TIM1 counter stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_TIM1_STOP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets TIM1 counter stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_TIM1_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets TIM15 counter stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_TIM15_STOP() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets TIM15 counter stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_TIM15_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets TIM16 counter stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_TIM16_STOP() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets TIM16 counter stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_TIM16_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets TIM17 counter stopped when core is halted
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBG_TIM17_STOP() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets TIM17 counter stopped when core is halted
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBG_TIM17_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
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
          IDCODE::Register IDCODE;
        };
        struct {
          char _space_CR[0x4];
          /**
            Debug MCU Configuration Register
          */
          CR::Register CR;
        };
        struct {
          char _space_APB1_FZ[0x8];
          /**
            Debug MCU APB1 freeze register
          */
          APB1_FZ::Register APB1_FZ;
        };
        struct {
          char _space_APB2_FZ[0xc];
          /**
            Debug MCU APB2 freeze register
          */
          APB2_FZ::Register APB2_FZ;
        };
      };
    };
  }
  
  extern volatile dbgmcu::Peripheral DBGMCU;
}