/**
 * PPRetailSimulationOptions.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: js/simulator/devices/SimulationOptions.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailTokenExpirationHandler;
@class PPRetailCaptureHandler;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailOfflinePaymentStatus;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailTransactionRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;
@class PPRetailSimulationOptions;


/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * SimulationOptions provides the list of customizations for a simulation mode
 */
@interface PPRetailSimulationOptions : PPRetailObject

    /**
    * It enables to have a device simulator for the simulator.
 * The default value is true.
    */
    @property (nonatomic,assign) BOOL enableDeviceSimulator;
    /**
    * It enables to have a fake server.
 * The default value is true.
    */
    @property (nonatomic,assign) BOOL enableServerSimulator;
    /**
    * the type of the device simulator to be used in simulation mode.
 * The default value is Miura
    */
    @property (nonatomic,assign) PPRetailDeviceSimulatorType deviceSimulatorType;
    /**
    * the use case for the simulator like chip, swipe, fallback swipe
 * or contactless. The default value is swipe
    */
    @property (nonatomic,assign) PPRetailSimulatorUseCase simulatorUseCase;
    /**
    * Response JSON data chosen by the user
    */
    @property (nonatomic,strong,nullable) NSString* userResponseData;


    
      - (instancetype _Null_unspecified)init;
    
    







@end
