/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SPCacheAsset : NSObject {

	NSString* _key;
	unsigned long long _state;
	unsigned long long _size;
	double _accessDate;

}

@property (nonatomic,retain) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double accessDate;                     //@synthesize accessDate=_accessDate - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(unsigned long long)size;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)key;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(double)accessDate;
-(void)setAccessDate:(double)arg1 ;
-(id)initWithName:(id)arg1 size:(unsigned long long)arg2 state:(unsigned long long)arg3 accessDate:(id)arg4 ;
@end

