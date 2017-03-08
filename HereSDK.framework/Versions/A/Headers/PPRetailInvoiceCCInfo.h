/**
 * PPRetailInvoiceCCInfo.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/paypal-invoicing/lib/CCInfo.js
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
@class PPRetailTransactionContext;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailEmvDevice;
@class PPRetailSecureEntryOptions;
@class PPRetailNumericEntryOptions;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailDeviceOperationResultHandler;
@class PPRetailVirtualPaymentDevice;
@class PPRetailPayer;
@class PPRetailTransactionRecord;

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * Container for information about a person CC'ed on an invoice
 */
@interface PPRetailInvoiceCCInfo : PPRetailObject

    /**
    * The email address of the
 * merchant @required @length(1,260) @format(email)
    */
    @property (nonatomic,strong,nullable) NSString* email;
    /**
    * The first name of the merchant @length(,30)
    */
    @property (nonatomic,strong,nullable) NSString* firstName;
    /**
    * The last name of the merchant @length(,30)
    */
    @property (nonatomic,strong,nullable) NSString* lastName;
    /**
    * The address of the merchant
    */
    @property (nonatomic,strong,nullable) PPRetailInvoiceAddress* address;
    /**
    * The business name of the merchant
    */
    @property (nonatomic,strong,nullable) NSString* businessName;
    /**
    * The phone number of the merchant
    */
    @property (nonatomic,strong,nullable) NSString* phone;
    /**
    * The fax number of the merchant
    */
    @property (nonatomic,strong,nullable) NSString* fax;
    /**
    * The URL of the merchant website @format{url}
    */
    @property (nonatomic,strong,nullable) NSString* website;
    /**
    * option to display additional info such as business hours
    */
    @property (nonatomic,strong,nullable) NSString* additionalInfo;








@end