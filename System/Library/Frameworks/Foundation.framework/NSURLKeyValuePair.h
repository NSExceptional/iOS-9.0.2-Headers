/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSURLKeyValuePair : NSObject {

	id key;
	id value;
	unsigned long long hash;

}
+(id)pairWithKey:(id)arg1 value:(id)arg2 ;
+(id)pair;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)key;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setKey:(id)arg1 ;
@end

