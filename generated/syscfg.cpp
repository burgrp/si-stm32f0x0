namespace target {
  namespace syscfg {
    
    /**
      configuration register 1
    */
    namespace CFGR1 {
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
          Gets Memory mapping selection bits
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMEM_MODE() volatile {
          return ((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Memory mapping selection bits
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMEM_MODE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((((value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets ADC DMA remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getADC_DMA_RMP() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets ADC DMA remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADC_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets USART1_TX DMA remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSART1_TX_DMA_RMP() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets USART1_TX DMA remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSART1_TX_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets USART1_RX DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSART1_RX_DMA_RMP() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets USART1_RX DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSART1_RX_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets TIM16 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM16_DMA_RMP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets TIM16 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM16_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets TIM17 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM17_DMA_RMP() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets TIM17 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM17_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Fast Mode Plus (FM plus) driving capability activation bits.
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2C_PB6_FM() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Fast Mode Plus (FM plus) driving capability activation bits.
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2C_PB6_FM(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Fast Mode Plus (FM+) driving capability activation bits.
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2C_PB7_FM() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets Fast Mode Plus (FM+) driving capability activation bits.
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2C_PB7_FM(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets Fast Mode Plus (FM+) driving capability activation bits.
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2C_PB8_FM() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Fast Mode Plus (FM+) driving capability activation bits.
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2C_PB8_FM(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets Fast Mode Plus (FM+) driving capability activation bits.
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2C_PB9_FM() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets Fast Mode Plus (FM+) driving capability activation bits.
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2C_PB9_FM(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets FM+ driving capability activation for I2C1
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2C1_FM_plus() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets FM+ driving capability activation for I2C1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2C1_FM_plus(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets FM+ driving capability activation for I2C2
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2C2_FM_plus() volatile {
          return ((raw & (0x1 << 21)) >> 21);
        }
        /**
          Sets FM+ driving capability activation for I2C2
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2C2_FM_plus(bool value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((((value)) << 21) & (0x1 << 21));
          return *(Register*)this;
        }
        /**
          Gets SPI2 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getSPI2_DMA_RMP() volatile {
          return ((raw & (0x1 << 24)) >> 24);
        }
        /**
          Sets SPI2 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSPI2_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((((value)) << 24) & (0x1 << 24));
          return *(Register*)this;
        }
        /**
          Gets USART2 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSART2_DMA_RMP() volatile {
          return ((raw & (0x1 << 25)) >> 25);
        }
        /**
          Sets USART2 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSART2_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((((value)) << 25) & (0x1 << 25));
          return *(Register*)this;
        }
        /**
          Gets USART3 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSART3_DMA_RMP() volatile {
          return ((raw & (0x1 << 26)) >> 26);
        }
        /**
          Sets USART3 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSART3_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((((value)) << 26) & (0x1 << 26));
          return *(Register*)this;
        }
        /**
          Gets I2C1 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2C1_DMA_RMP() volatile {
          return ((raw & (0x1 << 27)) >> 27);
        }
        /**
          Sets I2C1 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2C1_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((((value)) << 27) & (0x1 << 27));
          return *(Register*)this;
        }
        /**
          Gets TIM1 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM1_DMA_RMP() volatile {
          return ((raw & (0x1 << 28)) >> 28);
        }
        /**
          Sets TIM1 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM1_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
          return *(Register*)this;
        }
        /**
          Gets TIM2 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM2_DMA_RMP() volatile {
          return ((raw & (0x1 << 29)) >> 29);
        }
        /**
          Sets TIM2 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM2_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((((value)) << 29) & (0x1 << 29));
          return *(Register*)this;
        }
        /**
          Gets TIM3 DMA request remapping bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM3_DMA_RMP() volatile {
          return ((raw & (0x1 << 30)) >> 30);
        }
        /**
          Sets TIM3 DMA request remapping bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM3_DMA_RMP(bool value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      external interrupt configuration register 1
    */
    namespace EXTICR1 {
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
          Gets EXTI 0 configuration bits
          @param index in range 0..3
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return ((raw & (0xF << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0)));
        }
        /**
          Sets EXTI 0 configuration bits
          @param index in range 0..3
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 0)))) | ((((value)) << (0 + 4 * (index - 0))) & (0xF << (0 + 4 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      external interrupt configuration register 2
    */
    namespace EXTICR2 {
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
          Gets EXTI 4 configuration bits
          @param index in range 4..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return ((raw & (0xF << (0 + 4 * (index - 4)))) >> (0 + 4 * (index - 4)));
        }
        /**
          Sets EXTI 4 configuration bits
          @param index in range 4..7
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 4)))) | ((((value)) << (0 + 4 * (index - 4))) & (0xF << (0 + 4 * (index - 4))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      external interrupt configuration register 3
    */
    namespace EXTICR3 {
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
          Gets EXTI 8 configuration bits
          @param index in range 8..11
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return ((raw & (0xF << (0 + 4 * (index - 8)))) >> (0 + 4 * (index - 8)));
        }
        /**
          Sets EXTI 8 configuration bits
          @param index in range 8..11
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 8)))) | ((((value)) << (0 + 4 * (index - 8))) & (0xF << (0 + 4 * (index - 8))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      external interrupt configuration register 4
    */
    namespace EXTICR4 {
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
          Gets EXTI 12 configuration bits
          @param index in range 12..15
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return ((raw & (0xF << (0 + 4 * (index - 12)))) >> (0 + 4 * (index - 12)));
        }
        /**
          Sets EXTI 12 configuration bits
          @param index in range 12..15
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 12)))) | ((((value)) << (0 + 4 * (index - 12))) & (0xF << (0 + 4 * (index - 12))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      configuration register 2
    */
    namespace CFGR2 {
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
          Gets SRAM parity flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getSRAM_PEF() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets SRAM parity flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSRAM_PEF(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets PVD lock enable bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getPVD_LOCK() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets PVD lock enable bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPVD_LOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets SRAM parity lock bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getSRAM_PARITY_LOCK() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets SRAM parity lock bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSRAM_PARITY_LOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Cortex-M0 LOCKUP bit enable bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getLOCUP_LOCK() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Cortex-M0 LOCKUP bit enable bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLOCUP_LOCK(bool value) volatile {
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
            configuration register 1
          */
          CFGR1::Register CFGR1;
        };
        struct {
          char _space_EXTICR1[0x8];
          /**
            external interrupt configuration register 1
          */
          EXTICR1::Register EXTICR1;
        };
        struct {
          char _space_EXTICR2[0xc];
          /**
            external interrupt configuration register 2
          */
          EXTICR2::Register EXTICR2;
        };
        struct {
          char _space_EXTICR3[0x10];
          /**
            external interrupt configuration register 3
          */
          EXTICR3::Register EXTICR3;
        };
        struct {
          char _space_EXTICR4[0x14];
          /**
            external interrupt configuration register 4
          */
          EXTICR4::Register EXTICR4;
        };
        struct {
          char _space_CFGR2[0x18];
          /**
            configuration register 2
          */
          CFGR2::Register CFGR2;
        };
      };
    };
  }
  
  extern volatile syscfg::Peripheral SYSCFG;
}