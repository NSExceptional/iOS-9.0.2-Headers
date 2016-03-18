/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSURL, UIImage, UIColor;

@interface UIPasteboard : NSObject {

	NSString* _name;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSArray * strings; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSArray * URLs; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSArray * images; 
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) NSArray * colors; 
@property (nonatomic,readonly) NSString * name; 
@property (assign,getter=isPersistent,nonatomic) BOOL persistent; 
@property (nonatomic,readonly) long long changeCount; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,copy) NSArray * items; 
+(void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)arg1 ;
+(id)_accessibilityQuickSpeakPasteboard;
+(BOOL)_accessibilityUseQuickSpeakPasteBoard;
+(Class)safeCategoryBaseClass;
+(id)_findPasteboard;
+(id)_printPasteboard;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithUniqueName;
+(void)removePasteboardWithName:(id)arg1 ;
-(BOOL)pu_containsAssets;
-(id)pu_assets;
-(void)pu_setAssetRepresentations:(id)arg1 ;
-(id)pu_newPasteboardRepresentationForAsset:(id)arg1 data:(id)arg2 utiType:(id)arg3 ;
-(void)pu_setAssetRepresentation:(id)arg1 ;
-(id)__ck_composition;
-(id)__ck_mediaObjectManager;
-(id)__ck_pasteboardTypesForIndex:(unsigned long long)arg1 ;
-(id)__ck_valueForPasteboardType:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)__ck_pasteboardTypeListRTF;
-(id)__ck_dataForPasteboardType:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)__ck_filenameForType:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)__ck_mediaObjectAtIndex:(unsigned long long)arg1 ;
-(void)mf_addPasteboardRepresentationsForAttachments:(id)arg1 ;
-(id)mf_getAttachmentsPasteboardRepresentations;
-(void)mf_addPasteboardRepresentationsForTextAttachments:(id)arg1 ;
-(BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
-(void)pl_setAssets:(id)arg1 ;
-(void)pl_setAsset:(id)arg1 ;
-(id)pl_assetsInPhotoLibrary:(id)arg1 ;
-(BOOL)pl_containsAssets;
-(id)_initWithName:(id)arg1 system:(BOOL)arg2 create:(BOOL)arg3 ;
-(void)_pasteboardChanged:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(NSString *)string;
-(NSArray *)images;
-(UIImage *)image;
-(NSURL *)URL;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)strings;
-(void)setURLs:(NSArray *)arg1 ;
-(NSArray *)URLs;
-(NSArray *)colors;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(long long)changeCount;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)numberOfItems;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(void)_addItems:(id)arg1 oldPasteboardTypes:(id)arg2 ;
-(id)pasteboardTypes;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(BOOL)isPersistent;
-(void)setPersistent:(BOOL)arg1 ;
@end

