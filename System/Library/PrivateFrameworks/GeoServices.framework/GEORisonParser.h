/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSNumberFormatter, NSMutableCharacterSet;

@interface GEORisonParser : NSObject {

	NSNumberFormatter* _formatter;
	NSMutableCharacterSet* _risonTerminators;
	NSMutableCharacterSet* _risonEscapes;

}
-(void)dealloc;
-(id)init;
-(id)stringFromNumber:(id)arg1 ;
-(id)stringFromArray:(id)arg1 ;
-(id)stringLiteralWithReaderInfo:(SCD_Struct_GE170*)arg1 ;
-(id)numberWithReaderInfo:(SCD_Struct_GE170*)arg1 ;
-(id)arrayWithReaderInfo:(SCD_Struct_GE170*)arg1 ;
-(id)objectWithReaderInfo:(SCD_Struct_GE170*)arg1 ;
-(id)stringFromRisonObject:(id)arg1 ;
-(id)nullWithReaderInfo:(SCD_Struct_GE170*)arg1 ;
-(id)dictionaryWithReaderInfo:(SCD_Struct_GE170*)arg1 ;
-(id)boolWithReaderInfo:(SCD_Struct_GE170*)arg1 ;
-(id)stringFromDictionary:(id)arg1 ;
-(id)keyWithReaderInfo:(SCD_Struct_GE170*)arg1 ;
-(id)objectFromRisonString:(id)arg1 ;
-(id)stringFromNull:(id)arg1 ;
-(id)stringFromString:(id)arg1 ;
@end

