/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@class NSData, NSString, NSDate, NSNumber;

@interface ISPurchaseReceipt : NSObject {

	NSData* mReceiptData;
	SecCmsMessageStrRef mDecodedMessage;
	SecCmsSignedDataStrRef mSignedData;
	NSString* mReceiptPath;
	NSString* mBundleID;
	NSString* mBundleVersion;
	NSString* mParentalControls;
	NSString* mDownloadID;
	NSString* mAdamID;
	NSDate* mPurchaseDate;
	NSString* mPurchaseDateString;
	NSString* mDSID;
	NSString* mHWType;
	NSDate* mReceiptCreationDate;
	NSString* mDeveloperID;
	NSString* mInstallerVersionID;
	NSString* mReceiptType;
	NSNumber* mFRToolVersion;
	NSString* mExpirationDateString;
	NSDate* mExpirationDate;
	NSString* mRenewalDateString;
	NSDate* mRenewalDate;
	NSString* mOraganizationDisplayName;
	NSString* mCancellationReason;
	BOOL mHashIsValid;
	BOOL _createdFromCoder;

}

@property (readonly) NSString * receiptType; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSString * parentalControls; 
@property (readonly) NSDate * purchaseDate; 
@property (readonly) NSString * purchaseDateString; 
@property (readonly) NSString * dsid; 
@property (readonly) NSString * hwtype; 
@property (readonly) NSDate * receiptCreationDate; 
@property (readonly) NSString * developerID; 
@property (readonly) NSString * downloadID; 
@property (readonly) NSString * adamID; 
@property (readonly) NSString * installerVersionID; 
@property (readonly) NSNumber * frToolVersion; 
@property (readonly) NSDate * expirationDate; 
@property (readonly) NSDate * renewalDate; 
@property (readonly) NSString * renewalDateString; 
@property (readonly) NSString * organizationDisplayName; 
@property (readonly) NSString * cancellationReason; 
@property (readonly) BOOL isVPPLicensed; 
@property (readonly) BOOL isRevoked; 
@property (readonly) NSData * receiptData; 
@property (readonly) NSString * receiptDataString; 
@property (readonly) BOOL isProductionReceipt; 
+(id)receiptPathForBundleAtPath:(id)arg1 ;
+(id)receiptWithContentsOfFile:(id)arg1 ;
+(id)receiptFromBundleAtPath:(id)arg1 ;
+(id)receiptFromBundleAtURL:(id)arg1 ;
-(NSDate *)renewalDate;
-(BOOL)isRevoked;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(BOOL)isValid;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)_load;
-(NSString *)bundleVersion;
-(NSDate *)expirationDate;
-(NSString *)dsid;
-(NSDate *)purchaseDate;
-(BOOL)isVPPLicensed;
-(CFArrayRef)_copySignedDataCertificates;
-(NSDate *)receiptCreationDate;
-(BOOL)_checkWWDRIssuerForTrust:(SecTrustRef)arg1 ;
-(long long)_verifySignatureCheckRevocation:(BOOL)arg1 checkExpiration:(BOOL)arg2 useCurrentDate:(BOOL)arg3 ;
-(BOOL)validateAndCheckGUIDSeparately:(BOOL*)arg1 ;
-(NSData *)receiptData;
-(long long)checkSignature;
-(long long)checkSignatureSkipRevocation;
-(long long)checkSignatureAgainstCurrentDate;
-(BOOL)validateAndCheckGUIDSepately:(BOOL*)arg1 ;
-(NSString *)receiptDataString;
-(BOOL)isProductionReceipt;
-(NSString *)receiptType;
-(NSString *)purchaseDateString;
-(NSString *)parentalControls;
-(NSString *)downloadID;
-(NSString *)hwtype;
-(NSString *)developerID;
-(NSString *)installerVersionID;
-(NSNumber *)frToolVersion;
-(NSString *)renewalDateString;
-(NSString *)organizationDisplayName;
-(NSString *)cancellationReason;
-(NSString *)adamID;
@end
