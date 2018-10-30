namespace target {
  namespace syscfg {
    namespace reg {
      
      /**
        configuration register 1
      */
      class CFGR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory mapping selection bits
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMEM_MODE() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Memory mapping selection bits
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMEM_MODE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets ADC DMA remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADC_DMA_RMP() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets ADC DMA remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADC_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets USART1_TX DMA remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART1_TX_DMA_RMP() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets USART1_TX DMA remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART1_TX_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets USART1_RX DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART1_RX_DMA_RMP() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets USART1_RX DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART1_RX_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets TIM16 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM16_DMA_RMP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets TIM16 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM16_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets TIM17 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM17_DMA_RMP() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets TIM17 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM17_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Fast Mode Plus (FM plus) driving capability activation bits.
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C_PB6_FM() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Fast Mode Plus (FM plus) driving capability activation bits.
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C_PB6_FM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Fast Mode Plus (FM+) driving capability activation bits.
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C_PB7_FM() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Fast Mode Plus (FM+) driving capability activation bits.
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C_PB7_FM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Fast Mode Plus (FM+) driving capability activation bits.
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C_PB8_FM() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Fast Mode Plus (FM+) driving capability activation bits.
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C_PB8_FM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets Fast Mode Plus (FM+) driving capability activation bits.
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C_PB9_FM() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Fast Mode Plus (FM+) driving capability activation bits.
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C_PB9_FM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets FM+ driving capability activation for I2C1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C1_FM_plus() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets FM+ driving capability activation for I2C1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C1_FM_plus(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets FM+ driving capability activation for I2C2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C2_FM_plus() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets FM+ driving capability activation for I2C2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C2_FM_plus(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets SPI2 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI2_DMA_RMP() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets SPI2 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI2_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets USART2 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART2_DMA_RMP() volatile {
          return (raw & (0x1 << 25)) >> 25;
        }
        /**
          Sets USART2 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART2_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((value << 25) & (0x1 << 25));
        }
        /**
          Gets USART3 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART3_DMA_RMP() volatile {
          return (raw & (0x1 << 26)) >> 26;
        }
        /**
          Sets USART3 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART3_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((value << 26) & (0x1 << 26));
        }
        /**
          Gets I2C1 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C1_DMA_RMP() volatile {
          return (raw & (0x1 << 27)) >> 27;
        }
        /**
          Sets I2C1 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C1_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
        }
        /**
          Gets TIM1 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM1_DMA_RMP() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets TIM1 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM1_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets TIM2 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM2_DMA_RMP() volatile {
          return (raw & (0x1 << 29)) >> 29;
        }
        /**
          Sets TIM2 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM2_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
        }
        /**
          Gets TIM3 DMA request remapping bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM3_DMA_RMP() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets TIM3 DMA request remapping bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM3_DMA_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
      };
      
      /**
        external interrupt configuration register 1
      */
      class EXTICR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EXTI 0 configuration bits
          @param index in range 0..3
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0));
        }
        /**
          Sets EXTI 0 configuration bits
          @param index in range 0..3
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 0)))) | ((value << (0 + 4 * (index - 0))) & (0xF << (0 + 4 * (index - 0))));
        }
        /**
          Gets EXTI 0 configuration bits
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getEXTI() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets EXTI 0 configuration bits
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setEXTI(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        external interrupt configuration register 2
      */
      class EXTICR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EXTI 4 configuration bits
          @param index in range 4..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 4)))) >> (0 + 4 * (index - 4));
        }
        /**
          Sets EXTI 4 configuration bits
          @param index in range 4..7
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 4)))) | ((value << (0 + 4 * (index - 4))) & (0xF << (0 + 4 * (index - 4))));
        }
        /**
          Gets EXTI 4 configuration bits
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getEXTI() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets EXTI 4 configuration bits
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setEXTI(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        external interrupt configuration register 3
      */
      class EXTICR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EXTI 8 configuration bits
          @param index in range 8..11
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 8)))) >> (0 + 4 * (index - 8));
        }
        /**
          Sets EXTI 8 configuration bits
          @param index in range 8..11
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 8)))) | ((value << (0 + 4 * (index - 8))) & (0xF << (0 + 4 * (index - 8))));
        }
        /**
          Gets EXTI 8 configuration bits
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getEXTI() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets EXTI 8 configuration bits
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setEXTI(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        external interrupt configuration register 4
      */
      class EXTICR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EXTI 12 configuration bits
          @param index in range 12..15
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 12)))) >> (0 + 4 * (index - 12));
        }
        /**
          Sets EXTI 12 configuration bits
          @param index in range 12..15
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 12)))) | ((value << (0 + 4 * (index - 12))) & (0xF << (0 + 4 * (index - 12))));
        }
        /**
          Gets EXTI 12 configuration bits
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getEXTI() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets EXTI 12 configuration bits
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setEXTI(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        configuration register 2
      */
      class CFGR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SRAM parity flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSRAM_PEF() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets SRAM parity flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSRAM_PEF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets PVD lock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPVD_LOCK() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets PVD lock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPVD_LOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets SRAM parity lock bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSRAM_PARITY_LOCK() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets SRAM parity lock bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSRAM_PARITY_LOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Cortex-M0 LOCKUP bit enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLOCUP_LOCK() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Cortex-M0 LOCKUP bit enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLOCUP_LOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            configuration register 1
          */
          volatile reg::CFGR1 CFGR1;
        };
        struct {
          volatile char _space_EXTICR1[8];
          /**
            external interrupt configuration register 1
          */
          volatile reg::EXTICR1 EXTICR1;
        };
        struct {
          volatile char _space_EXTICR2[12];
          /**
            external interrupt configuration register 2
          */
          volatile reg::EXTICR2 EXTICR2;
        };
        struct {
          volatile char _space_EXTICR3[16];
          /**
            external interrupt configuration register 3
          */
          volatile reg::EXTICR3 EXTICR3;
        };
        struct {
          volatile char _space_EXTICR4[20];
          /**
            external interrupt configuration register 4
          */
          volatile reg::EXTICR4 EXTICR4;
        };
        struct {
          volatile char _space_CFGR2[24];
          /**
            configuration register 2
          */
          volatile reg::CFGR2 CFGR2;
        };
      };
    };
  }
  
  extern syscfg::Peripheral SYSCFG;
}