/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>

@class MFMimePart;

@interface MFMimeBody : MFMessageBody {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;

}
+(id)copyNewMimeBoundary;
+(id)versionString;
-(long long)numberOfAlternatives;
-(id)topLevelPart;
-(void)setPreferredAlternative:(long long)arg1 ;
-(unsigned long long)totalTextSize;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(BOOL)isHTML;
-(id)attachmentURLs;
-(id)preferredBodyPart;
-(void)dealloc;
-(id)init;
-(id)mimeType;
-(id)attachments;
-(BOOL)isRich;
-(long long)preferredAlternative;
-(id)mimeSubtype;
-(id)firstPartPassingTest:(/*^block*/id)arg1 ;
-(void)setTopLevelPart:(id)arg1 ;
-(id)textHtmlPart;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)partWithNumber:(id)arg1 ;
@end

