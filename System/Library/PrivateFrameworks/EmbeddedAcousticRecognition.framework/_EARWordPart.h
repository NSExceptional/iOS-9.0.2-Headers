/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_EARWordPart_JSExport.h>

@class NSString, NSSet;

@interface _EARWordPart : NSObject <_EARWordPart_JSExport> {

	NSString* _tagName;
	NSString* _orthography;
	long long _tag;
	unsigned long long _frequency;
	NSSet* _pronunciations;

}

@property (nonatomic,readonly) NSString * orthography;                    //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,readonly) long long tag;                             //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSString * tagName; 
@property (nonatomic,readonly) unsigned long long frequency;              //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) NSSet * pronunciations;                    //@synthesize pronunciations=_pronunciations - In the implementation block
-(id)getTagName;
-(id)getPronuncations;
-(id)getOrthography;
-(NSString *)orthography;
-(long long)tag;
-(NSString *)tagName;
-(unsigned long long)frequency;
-(id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(long long)arg3 ;
-(id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4 ;
-(NSSet *)pronunciations;
@end
