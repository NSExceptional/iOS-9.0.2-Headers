/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKWebProcessPlugInScriptWorld, JSContext, WKWebProcessPlugInFrame;

@interface WBSMetadataExtractor : NSObject {

	WKWebProcessPlugInScriptWorld* _webProcessPlugInScriptWorld;
	JSContext* _context;
	WKWebProcessPlugInFrame* _webProcessPlugInFrame;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * webProcessPlugInFrame;              //@synthesize webProcessPlugInFrame=_webProcessPlugInFrame - In the implementation block
@property (nonatomic,readonly) JSContext * context; 
+(id)metadataExtractorScriptSource;
-(void)dealloc;
-(JSContext *)context;
-(id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(BOOL)arg2 ;
-(id)makeContext;
-(id)_resultForInvokingFunctionWithName:(id)arg1 ;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)appleTouchIconURLs;
-(id)faviconURLs;
-(WKWebProcessPlugInFrame *)webProcessPlugInFrame;
@end
