/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class CLLocation, NSMutableDictionary, NSNumber, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {

	CLLocation* _location;
	long long _localizationStyle;
	NSMutableDictionary* _requestParameters;
	NSNumber* _timeoutInterval;

}

@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) long long localizationStyle;              //@synthesize localizationStyle=_localizationStyle - In the implementation block
@property (nonatomic,copy) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutInterval;                 //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalizationStyle:(long long)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(id)copyRequestParameters;
-(NSNumber *)timeoutInterval;
-(long long)localizationStyle;
@end

