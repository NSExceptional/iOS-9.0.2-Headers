/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject {

	id _attr;
	id _value;
	unsigned long long _count;
	void* _reserved;

}

@property (copy,readonly) NSString * attribute; 
@property (retain,readonly) id value; 
@property (readonly) unsigned long long count; 
-(id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4 ;
-(NSString *)attribute;
-(void)dealloc;
-(unsigned long long)count;
-(id)value;
@end

