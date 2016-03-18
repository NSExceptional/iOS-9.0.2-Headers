/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCardMediaObject.h>

@class ABVCardRecord, UIImage;

@interface CKContactMediaObject : CKCardMediaObject {

	ABVCardRecord* _vCard;
	UIImage* _vCardImage;

}

@property (nonatomic,retain) ABVCardRecord * vCard;              //@synthesize vCard=_vCard - In the implementation block
@property (nonatomic,retain) UIImage * vCardImage;               //@synthesize vCardImage=_vCardImage - In the implementation block
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)attachmentSummary:(unsigned long long)arg1 ;
-(int)mediaType;
-(void)dealloc;
-(id)title;
-(id)subtitle;
-(id)icon;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(CGSize)bbSize;
-(ABVCardRecord *)vCard;
-(id)vCardImageOfSize:(CGSize)arg1 ;
-(Class)coloredBalloonViewClass;
-(void)setVCard:(ABVCardRecord *)arg1 ;
-(UIImage *)vCardImage;
-(void)setVCardImage:(UIImage *)arg1 ;
@end

