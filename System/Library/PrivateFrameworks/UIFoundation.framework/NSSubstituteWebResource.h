/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSURL, NSString;

@interface NSSubstituteWebResource : NSObject {

	NSData* _data;
	NSURL* _url;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSString* _frameName;

}
-(void)dealloc;
-(id)data;
-(id)URL;
-(id)MIMEType;
-(Class)_webResourceClass;
-(id)webResource;
-(id)frameName;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(id)textEncodingName;
@end

