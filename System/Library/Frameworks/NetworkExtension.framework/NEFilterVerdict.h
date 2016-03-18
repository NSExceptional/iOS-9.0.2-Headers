/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEFilterVerdict : NSObject <NSSecureCoding, NSCopying> {

	BOOL _needRules;
	BOOL _drop;
	BOOL _remediate;
	BOOL _urlAppendString;
	NSString* _remediationURLMapKey;
	NSString* _remediationButtonTextMapKey;
	NSString* _urlAppendStringMapKey;

}

@property (assign) BOOL needRules;                                      //@synthesize needRules=_needRules - In the implementation block
@property (assign) BOOL drop;                                           //@synthesize drop=_drop - In the implementation block
@property (assign) BOOL remediate;                                      //@synthesize remediate=_remediate - In the implementation block
@property (assign) BOOL urlAppendString;                                //@synthesize urlAppendString=_urlAppendString - In the implementation block
@property (retain) NSString * remediationURLMapKey;                     //@synthesize remediationURLMapKey=_remediationURLMapKey - In the implementation block
@property (retain) NSString * remediationButtonTextMapKey;              //@synthesize remediationButtonTextMapKey=_remediationButtonTextMapKey - In the implementation block
@property (retain) NSString * urlAppendStringMapKey;                    //@synthesize urlAppendStringMapKey=_urlAppendStringMapKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUrlAppendString:(BOOL)arg1 ;
-(BOOL)urlAppendString;
-(NSString *)urlAppendStringMapKey;
-(BOOL)drop;
-(BOOL)remediate;
-(NSString *)remediationURLMapKey;
-(NSString *)remediationButtonTextMapKey;
-(BOOL)needRules;
-(void)setDrop:(BOOL)arg1 ;
-(void)setNeedRules:(BOOL)arg1 ;
-(id)initWithDrop:(BOOL)arg1 remediate:(BOOL)arg2 ;
-(void)setRemediationURLMapKey:(NSString *)arg1 ;
-(void)setRemediationButtonTextMapKey:(NSString *)arg1 ;
-(void)setUrlAppendStringMapKey:(NSString *)arg1 ;
-(void)setRemediate:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

