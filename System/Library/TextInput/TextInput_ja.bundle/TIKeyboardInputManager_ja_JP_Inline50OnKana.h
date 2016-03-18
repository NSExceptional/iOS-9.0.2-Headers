/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TIKeyboardInputManager_ja_JP.h>

@class NSDictionary, NSMutableArray, NSArray;

@interface TIKeyboardInputManager_ja_JP_Inline50OnKana : TIKeyboardInputManager_ja_JP {

	BOOL _is3x3;
	BOOL _isFlickOnly;
	BOOL _isInHardwareKeyboardMode;
	BOOL _knowInputMode;
	BOOL _knowHardwareMode;
	BOOL _knowSplitMode;
	NSDictionary* _kanaFlickDirectionMap_current;
	NSDictionary* _kanaFlickKeyMap_current;
	BOOL _supportsFlickAutocorrection;
	NSMutableArray* _geometryDataArray;
	NSArray* _clearedGeometryDataArray;
	NSDictionary* _kanaFlickDirectionMap_3x3;
	NSDictionary* _kanaFlickDirectionMap_50on;
	NSDictionary* _kanaFlickKeyMap_3x3;
	NSDictionary* _kanaFlickKeyMap_50on;

}

@property (assign,nonatomic) BOOL supportsFlickAutocorrection;                       //@synthesize supportsFlickAutocorrection=_supportsFlickAutocorrection - In the implementation block
@property (nonatomic,readonly) NSMutableArray * geometryDataArray;                   //@synthesize geometryDataArray=_geometryDataArray - In the implementation block
@property (nonatomic,retain) NSArray * clearedGeometryDataArray;                     //@synthesize clearedGeometryDataArray=_clearedGeometryDataArray - In the implementation block
@property (nonatomic,retain) NSDictionary * kanaFlickDirectionMap_3x3;               //@synthesize kanaFlickDirectionMap_3x3=_kanaFlickDirectionMap_3x3 - In the implementation block
@property (nonatomic,retain) NSDictionary * kanaFlickDirectionMap_50on;              //@synthesize kanaFlickDirectionMap_50on=_kanaFlickDirectionMap_50on - In the implementation block
@property (nonatomic,retain) NSDictionary * kanaFlickKeyMap_3x3;                     //@synthesize kanaFlickKeyMap_3x3=_kanaFlickKeyMap_3x3 - In the implementation block
@property (nonatomic,retain) NSDictionary * kanaFlickKeyMap_50on;                    //@synthesize kanaFlickKeyMap_50on=_kanaFlickKeyMap_50on - In the implementation block
+(Class)wordSearchClass;
-(void)dealloc;
-(id)candidateResultSet;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(void)clearInput;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)_deleteFromInput;
-(void)setSupportsFlickAutocorrection:(BOOL)arg1 ;
-(void)resetWordSearchWithClass:(Class)arg1 ;
-(void)buildFlickTables;
-(void)setKanaFlickDirectionMap_3x3:(NSDictionary *)arg1 ;
-(void)setKanaFlickKeyMap_3x3:(NSDictionary *)arg1 ;
-(void)setKanaFlickDirectionMap_50on:(NSDictionary *)arg1 ;
-(void)setKanaFlickKeyMap_50on:(NSDictionary *)arg1 ;
-(NSMutableArray *)geometryDataArray;
-(NSArray *)clearedGeometryDataArray;
-(void)setClearedGeometryDataArray:(NSArray *)arg1 ;
-(unsigned short)flickKeyForBaseKey:(unsigned short)arg1 direction:(int)arg2 ;
-(BOOL)supportsFlickAutocorrection;
-(void)calculateGeometryForInput:(id)arg1 ;
-(NSDictionary *)kanaFlickDirectionMap_3x3;
-(NSDictionary *)kanaFlickDirectionMap_50on;
-(NSDictionary *)kanaFlickKeyMap_3x3;
-(NSDictionary *)kanaFlickKeyMap_50on;
-(id)initWithInputMode:(id)arg1 ;
-(id)geometryModelData;
-(id)keyboardConfigurationLayoutTag;
-(void)syncToLayoutState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)didAcceptCandidate:(id)arg1 ;
-(BOOL)shouldCommitInputString;
-(void)deleteFromInputWithContext:(id)arg1 ;
@end

