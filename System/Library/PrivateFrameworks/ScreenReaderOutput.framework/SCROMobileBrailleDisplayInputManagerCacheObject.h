/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray, NSBundle;

@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject {

	NSString* _driverIdentifier;
	NSString* _modelIdentifier;
	int _brailleInputMode;
	NSMutableDictionary* _commandDictionary;
	NSMutableArray* _orderedIdentifiers;
	NSBundle* _bundle;

}

@property (nonatomic,retain) NSString * modelIdentifier;                           //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (assign,nonatomic) int brailleInputMode;                                 //@synthesize brailleInputMode=_brailleInputMode - In the implementation block
@property (nonatomic,retain) NSString * driverIdentifier;                          //@synthesize driverIdentifier=_driverIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commandDictionary;              //@synthesize commandDictionary=_commandDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedIdentifiers;                  //@synthesize orderedIdentifiers=_orderedIdentifiers - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                    //@synthesize bundle=_bundle - In the implementation block
-(void)dealloc;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)modelIdentifier;
-(int)brailleInputMode;
-(NSString *)driverIdentifier;
-(void)setBrailleInputMode:(int)arg1 ;
-(void)setDriverIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)commandDictionary;
-(void)setCommandDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)orderedIdentifiers;
-(void)setOrderedIdentifiers:(NSMutableArray *)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
@end

