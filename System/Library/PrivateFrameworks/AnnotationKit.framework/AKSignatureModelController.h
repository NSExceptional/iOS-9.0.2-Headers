/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, AKSignature, AKController, NSArray;

@interface AKSignatureModelController : NSObject {

	int _nextUID;
	BOOL _signaturesDecryptionAttempted;
	NSMutableArray* _signatures;
	AKSignature* _selectedSignature;
	AKController* _controller;

}

@property (readonly) NSArray * signatures; 
@property (nonatomic,retain) AKSignature * selectedSignature;              //@synthesize selectedSignature=_selectedSignature - In the implementation block
@property (__weak) AKController * controller;                              //@synthesize controller=_controller - In the implementation block
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(void)_saveSignatureToPersistentStorage:(id)arg1 ;
-(BOOL)_deleteSignatureFromKeychain:(id)arg1 ;
-(void)_loadSignaturesFromPersistentStorage;
-(id)_createAKSignatureFromItemRef:(id)arg1 ;
-(BOOL)_createNewKeychainItemWithSignature:(id)arg1 ;
-(void)insertObject:(id)arg1 inSignaturesAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSignaturesAtIndex:(unsigned long long)arg1 ;
-(NSArray *)signatures;
-(void)reloadSignaturesFromSource;
-(void)_migrateLegacySignaturesFromPreviewContainer;
-(AKSignature *)selectedSignature;
-(void)setSelectedSignature:(AKSignature *)arg1 ;
@end

