/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView {

	BOOL _ignoresContentOffsetChanges;
	BOOL _dynamicsDisabled;

}

@property (assign,nonatomic) BOOL ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
@property (assign,nonatomic) BOOL dynamicsDisabled;                         //@synthesize dynamicsDisabled=_dynamicsDisabled - In the implementation block
-(void)reloadData;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setIgnoresContentOffsetChanges:(BOOL)arg1 ;
-(BOOL)ignoresContentOffsetChanges;
-(void)setDynamicsDisabled:(BOOL)arg1 ;
-(BOOL)dynamicsDisabled;
@end

