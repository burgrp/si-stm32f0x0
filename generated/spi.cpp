namespace target {
  namespace spi {
    
    /**
      control register 1
    */
    namespace CR1 {
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
          Gets Bidirectional data mode enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBIDIMODE() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Bidirectional data mode enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBIDIMODE(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Output enable in bidirectional mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getBIDIOE() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Output enable in bidirectional mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBIDIOE(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Hardware CRC calculation enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRCEN() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Hardware CRC calculation enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets CRC transfer next
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRCNEXT() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets CRC transfer next
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRCNEXT(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data frame format
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFF() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Data frame format
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFF(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Receive only
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXONLY() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Receive only
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXONLY(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Software slave management
          @return boolean value
        */
        __attribute__((always_inline)) bool getSSM() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Software slave management
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSSM(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Internal slave select
          @return boolean value
        */
        __attribute__((always_inline)) bool getSSI() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Internal slave select
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSSI(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Frame format
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSBFIRST() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Frame format
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSBFIRST(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets SPI enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSPE() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets SPI enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSPE(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Baud rate control
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getBR() volatile {
          return ((raw & (0x7 << 3)) >> 3);
        }
        /**
          Sets Baud rate control
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setBR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 3)) | ((((value)) << 3) & (0x7 << 3));
          return *(Register*)this;
        }
        /**
          Gets Master selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getMSTR() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Master selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMSTR(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Clock polarity
          @return boolean value
        */
        __attribute__((always_inline)) bool getCPOL() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Clock polarity
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCPOL(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Clock phase
          @return boolean value
        */
        __attribute__((always_inline)) bool getCPHA() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Clock phase
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCPHA(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      control register 2
    */
    namespace CR2 {
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
          Gets Rx buffer DMA enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXDMAEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Rx buffer DMA enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXDMAEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Tx buffer DMA enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXDMAEN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Tx buffer DMA enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXDMAEN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets SS output enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSSOE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets SS output enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSSOE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets NSS pulse management
          @return boolean value
        */
        __attribute__((always_inline)) bool getNSSP() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets NSS pulse management
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNSSP(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Frame format
          @return boolean value
        */
        __attribute__((always_inline)) bool getFRF() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Frame format
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFRF(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getERRIE() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERRIE(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets RX buffer not empty interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXNEIE() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets RX buffer not empty interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXNEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Tx buffer empty interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXEIE() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Tx buffer empty interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Data size
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDS() volatile {
          return ((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Data size
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((((value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets FIFO reception threshold
          @return boolean value
        */
        __attribute__((always_inline)) bool getFRXTH() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets FIFO reception threshold
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFRXTH(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Last DMA transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getLDMA_RX() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Last DMA transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLDMA_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Last DMA transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getLDMA_TX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Last DMA transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLDMA_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      status register
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
          Gets Receive buffer not empty
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXNE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Receive buffer not empty
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXNE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transmit buffer empty
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transmit buffer empty
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Channel side
          @return boolean value
        */
        __attribute__((always_inline)) bool getCHSIDE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Channel side
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCHSIDE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Underrun flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getUDR() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Underrun flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUDR(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets CRC error flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRCERR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets CRC error flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRCERR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Mode fault
          @return boolean value
        */
        __attribute__((always_inline)) bool getMODF() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Mode fault
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMODF(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Overrun flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVR() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Overrun flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVR(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Busy flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getBSY() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Busy flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBSY(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets TI frame format error
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIFRFE() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets TI frame format error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIFRFE(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets FIFO reception level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFRLVL() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets FIFO reception level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setFRLVL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets FIFO transmission level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFTLVL() volatile {
          return ((raw & (0x3 << 11)) >> 11);
        }
        /**
          Sets FIFO transmission level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setFTLVL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((((value)) << 11) & (0x3 << 11));
          return *(Register*)this;
        }
      };
    };
    
    /**
      data register
    */
    namespace DR {
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
          Gets Data register
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDR() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Data register
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CRC polynomial register
    */
    namespace CRCPR {
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
          Gets CRC polynomial register
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCRCPOLY() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets CRC polynomial register
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setCRCPOLY(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      RX CRC register
    */
    namespace RXCRCR {
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
          Gets Rx CRC register
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getRxCRC() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Rx CRC register
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setRxCRC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      TX CRC register
    */
    namespace TXCRCR {
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
          Gets Tx CRC register
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getTxCRC() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Tx CRC register
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setTxCRC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      I2S configuration register
    */
    namespace I2SCFGR {
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
          Gets I2S mode selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2SMOD() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets I2S mode selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2SMOD(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets I2S Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2SE() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets I2S Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2SE(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets I2S configuration mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getI2SCFG() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets I2S configuration mode
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setI2SCFG(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets PCM frame synchronization
          @return boolean value
        */
        __attribute__((always_inline)) bool getPCMSYNC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets PCM frame synchronization
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPCMSYNC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets I2S standard selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getI2SSTD() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets I2S standard selection
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setI2SSTD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Steady state clock polarity
          @return boolean value
        */
        __attribute__((always_inline)) bool getCKPOL() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Steady state clock polarity
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCKPOL(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data length to be transferred
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDATLEN() volatile {
          return ((raw & (0x3 << 1)) >> 1);
        }
        /**
          Sets Data length to be transferred
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setDATLEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((((value)) << 1) & (0x3 << 1));
          return *(Register*)this;
        }
        /**
          Gets Channel length (number of bits per audio channel)
          @return boolean value
        */
        __attribute__((always_inline)) bool getCHLEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel length (number of bits per audio channel)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCHLEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      I2S prescaler register
    */
    namespace I2SPR {
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
          Gets Master clock output enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getMCKOE() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Master clock output enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMCKOE(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Odd factor for the prescaler
          @return boolean value
        */
        __attribute__((always_inline)) bool getODD() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Odd factor for the prescaler
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setODD(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets I2S Linear prescaler
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getI2SDIV() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets I2S Linear prescaler
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setI2SDIV(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            control register 1
          */
          CR1::Register CR1;
        };
        struct {
          char _space_CR2[0x4];
          /**
            control register 2
          */
          CR2::Register CR2;
        };
        struct {
          char _space_SR[0x8];
          /**
            status register
          */
          SR::Register SR;
        };
        struct {
          char _space_DR[0xc];
          /**
            data register
          */
          DR::Register DR;
        };
        struct {
          char _space_CRCPR[0x10];
          /**
            CRC polynomial register
          */
          CRCPR::Register CRCPR;
        };
        struct {
          char _space_RXCRCR[0x14];
          /**
            RX CRC register
          */
          RXCRCR::Register RXCRCR;
        };
        struct {
          char _space_TXCRCR[0x18];
          /**
            TX CRC register
          */
          TXCRCR::Register TXCRCR;
        };
        struct {
          char _space_I2SCFGR[0x1c];
          /**
            I2S configuration register
          */
          I2SCFGR::Register I2SCFGR;
        };
        struct {
          char _space_I2SPR[0x20];
          /**
            I2S prescaler register
          */
          I2SPR::Register I2SPR;
        };
      };
    };
  }
  
  extern volatile spi::Peripheral SPI1;
  extern volatile spi::Peripheral SPI2;
}