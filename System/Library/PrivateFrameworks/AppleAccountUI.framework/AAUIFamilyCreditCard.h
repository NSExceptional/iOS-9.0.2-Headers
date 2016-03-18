/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSURL, UIImage;

@interface AAUIFamilyCreditCard : NSObject {

	NSDate* _expirationDate;
	NSString* _lastFourDigits;
	NSString* _type;
	NSString* _usageNotice;
	NSString* _providerDescription;
	NSURL* _imageURL;
	UIImage* _image;

}

@property (nonatomic,copy) NSDate * expirationDate;                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * lastFourDigits;                   //@synthesize lastFourDigits=_lastFourDigits - In the implementation block
@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * usageNotice;                      //@synthesize usageNotice=_usageNotice - In the implementation block
@property (nonatomic,copy) NSString * providerDescription;              //@synthesize providerDescription=_providerDescription - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(UIImage *)image;
-(NSString *)lastFourDigits;
-(void)setLastFourDigits:(NSString *)arg1 ;
-(NSString *)usageNotice;
-(void)setUsageNotice:(NSString *)arg1 ;
-(NSString *)providerDescription;
-(void)setProviderDescription:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

