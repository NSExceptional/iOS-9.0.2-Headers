/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSNumber, NSString, NSDictionary;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {

	long long _allowedRetryCount;
	BOOL _allowsBootstrapCellularData;
	BOOL _allowsExpiredBags;
	long long _bagType;
	NSMutableDictionary* _httpHeaders;
	BOOL _ignoresCaches;
	NSNumber* _userIdentifier;
	BOOL _usesCachedBagsOnly;

}

@property (assign,nonatomic) long long allowedRetryCount;                   //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (assign,nonatomic) long long bagType;                             //@synthesize bagType=_bagType - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) BOOL ignoresCaches;                            //@synthesize ignoresCaches=_ignoresCaches - In the implementation block
@property (nonatomic,retain) NSNumber * userIdentifier;                     //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * allHTTPHeaders; 
@property (assign,nonatomic) BOOL allowsBootstrapCellularData;              //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (assign,nonatomic) BOOL allowsExpiredBags;                        //@synthesize allowsExpiredBags=_allowsExpiredBags - In the implementation block
@property (assign,nonatomic) BOOL usesCachedBagsOnly;                       //@synthesize usesCachedBagsOnly=_usesCachedBagsOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithBagType:(long long)arg1 ;
-(NSNumber *)userIdentifier;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cacheKey;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(void)setIgnoresCaches:(BOOL)arg1 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(long long)allowedRetryCount;
-(long long)bagType;
-(NSDictionary *)allHTTPHeaders;
-(void)setAllHTTPHeaders:(NSDictionary *)arg1 ;
-(BOOL)allowsExpiredBags;
-(void)setAllowsExpiredBags:(BOOL)arg1 ;
-(BOOL)ignoresCaches;
-(BOOL)usesCachedBagsOnly;
-(void)setUsesCachedBagsOnly:(BOOL)arg1 ;
-(void)setBagType:(long long)arg1 ;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
@end

