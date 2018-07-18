/**
 * PPRetailDeviceUpdate.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/retail-payment-device/src/DeviceUpdate.js
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


/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * A device update object is passed to your application via the PaymentDevice#updateRequired event and is capable
 * of applying an update to a device.
 */
@interface PPRetailDeviceUpdate : PPRetailObject

    /**
    * Whether the update is required before taking further transactions using the device
    */
    @property (nonatomic,assign) BOOL isRequired;
    /**
    * Indicates if the update was installed
    */
    @property (nonatomic,assign) BOOL wasInstalled;
    /**
    * True if software update is in progress @readonly
    */
    @property (nonatomic,assign,readonly) BOOL updateInProgress;


    
      - (instancetype _Nullable)initWithDevice:(PPRetailPaymentDevice* _Nullable)device;
      
    - (instancetype _Null_unspecified)init NS_UNAVAILABLE;
    + (instancetype _Null_unspecified)new NS_UNAVAILABLE;




    /**
     * Display a prompt to the merchant offering the opportunity to upgrade the payment device, and optionally
     * update the device. Call the callback with completion status when the upgrade is complete or cancelled.
     */
    -(void)offer:(PPRetailDeviceUpdateCompletedHandler _Nullable)callback;

    /**
     * Display a prompt to the merchant offering the opportunity to upgrade the payment device, and optionally
     * update the device. Call the callback with completion status when the upgrade is complete or cancelled.
     */
    -(void)offer:(NSString* _Nullable)tag callback:(PPRetailDeviceUpdateCompletedHandler _Nullable)callback;

    /**
     * Begin the software update.
     */
    -(void)begin:(PPRetailDeviceUpdateCompletedHandler _Nullable)callback;

    /**
     * Begin the software update.
     */
    -(void)begin:(NSString* _Nullable)tag callback:(PPRetailDeviceUpdateCompletedHandler _Nullable)callback;

    /**
     * Check device-specific conditions for update such as battery level.
     */
    -(void)validateUpdateEligibility;




    /**
     * Add a listener for the reconnectReader event
     * @returns PPRetailReconnectReaderSignal an object that can be used to remove the listener when
     * you're done with it.
     */
    -(PPRetailReconnectReaderSignal _Nullable)addReconnectReaderListener:(PPRetailReconnectReaderEvent _Nullable)listener;

    /**
     * Remove a listener for the reconnectReader event given the signal object that was returned from addReconnectReaderListener
     */
    -(void)removeReconnectReaderListener:(PPRetailReconnectReaderSignal _Nullable)listenerToken;


@end
