/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SMSPart : NSObject {

	NSMutableArray* _textParts;
	NSMutableArray* _attachmentParts;

}

@property (nonatomic,retain,readonly) NSArray * textParts;                    //@synthesize textParts=_textParts - In the implementation block
@property (nonatomic,retain,readonly) NSArray * attachmentParts;              //@synthesize attachmentParts=_attachmentParts - In the implementation block
-(void)dealloc;
-(NSArray *)attachmentParts;
-(NSArray *)textParts;
-(void)addAttachmentPart:(id)arg1 ;
-(void)addTextPart:(id)arg1 ;
@end
