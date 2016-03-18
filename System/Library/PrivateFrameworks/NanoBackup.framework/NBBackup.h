/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSNumber, NSDate;

@interface NBBackup : NSObject <NSSecureCoding> {

	BOOL _locationOptInEnabled;
	BOOL _diagnosticsOptInEnabled;
	BOOL _siriOptInEnabled;
	NSUUID* _uuid;
	NSString* _name;
	NSString* _productType;
	NSString* _systemVersion;
	NSString* _systemBuildVersion;
	NSString* _marketingVersion;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	NSNumber* _bottomEnclosureMaterial;
	NSNumber* _topEnclosureMaterial;
	NSNumber* _fcmMaterial;
	NSNumber* _bcmWindowMaterial;
	NSString* _watchFace;
	NSString* _watchFaceColor;
	NSDate* _lastModificationDate;
	NSNumber* _sizeInBytes;
	NSString* _model;
	NSString* _material;

}

@property (nonatomic,retain) NSUUID * uuid;                                                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * productType;                                                     //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * systemVersion;                                                   //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,retain) NSString * systemBuildVersion;                                              //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * marketingVersion;                                                //@synthesize marketingVersion=_marketingVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceColor;                                                     //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,retain) NSString * deviceEnclosureColor;                                            //@synthesize deviceEnclosureColor=_deviceEnclosureColor - In the implementation block
@property (nonatomic,retain) NSNumber * bottomEnclosureMaterial;                                         //@synthesize bottomEnclosureMaterial=_bottomEnclosureMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * topEnclosureMaterial;                                            //@synthesize topEnclosureMaterial=_topEnclosureMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * fcmMaterial;                                                     //@synthesize fcmMaterial=_fcmMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * bcmWindowMaterial;                                               //@synthesize bcmWindowMaterial=_bcmWindowMaterial - In the implementation block
@property (nonatomic,retain) NSString * watchFace;                                                       //@synthesize watchFace=_watchFace - In the implementation block
@property (nonatomic,retain) NSString * watchFaceColor;                                                  //@synthesize watchFaceColor=_watchFaceColor - In the implementation block
@property (assign,getter=isLocationOptInEnabled,nonatomic) BOOL locationOptInEnabled;                    //@synthesize locationOptInEnabled=_locationOptInEnabled - In the implementation block
@property (assign,getter=isDiagnosticsOptInEnabled,nonatomic) BOOL diagnosticsOptInEnabled;              //@synthesize diagnosticsOptInEnabled=_diagnosticsOptInEnabled - In the implementation block
@property (nonatomic,retain) NSDate * lastModificationDate;                                              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (nonatomic,retain) NSNumber * sizeInBytes;                                                     //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,retain) NSString * model;                                                           //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * material;                                                        //@synthesize material=_material - In the implementation block
@property (assign,getter=isSiriOptInEnabled,nonatomic) BOOL siriOptInEnabled;                            //@synthesize siriOptInEnabled=_siriOptInEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)systemVersion;
-(NSString *)model;
-(NSUUID *)uuid;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)deviceEnclosureColor;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSString *)systemBuildVersion;
-(NSNumber *)bottomEnclosureMaterial;
-(void)setBottomEnclosureMaterial:(NSNumber *)arg1 ;
-(NSNumber *)topEnclosureMaterial;
-(void)setTopEnclosureMaterial:(NSNumber *)arg1 ;
-(NSNumber *)fcmMaterial;
-(void)setFcmMaterial:(NSNumber *)arg1 ;
-(NSNumber *)bcmWindowMaterial;
-(void)setBcmWindowMaterial:(NSNumber *)arg1 ;
-(NSString *)watchFace;
-(void)setWatchFace:(NSString *)arg1 ;
-(NSString *)watchFaceColor;
-(void)setWatchFaceColor:(NSString *)arg1 ;
-(BOOL)isLocationOptInEnabled;
-(void)setLocationOptInEnabled:(BOOL)arg1 ;
-(BOOL)isDiagnosticsOptInEnabled;
-(void)setDiagnosticsOptInEnabled:(BOOL)arg1 ;
-(NSDate *)lastModificationDate;
-(void)setLastModificationDate:(NSDate *)arg1 ;
-(BOOL)isSiriOptInEnabled;
-(void)setSiriOptInEnabled:(BOOL)arg1 ;
-(void)setSizeInBytes:(NSNumber *)arg1 ;
-(void)setMaterial:(NSString *)arg1 ;
-(NSString *)material;
-(NSNumber *)sizeInBytes;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(NSString *)marketingVersion;
-(void)setMarketingVersion:(NSString *)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
@end

