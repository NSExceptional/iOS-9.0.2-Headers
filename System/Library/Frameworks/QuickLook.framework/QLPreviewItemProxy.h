/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSUUID, NSString, NSURL, UIColor;

@interface QLPreviewItemProxy : NSObject <NSSecureCoding, QLPreviewItem> {

	NSUUID* _uuid;
	NSString* _fileExtensionToken;
	long long _fileExtensionHandle;
	long long _index;
	BOOL _isPromisedItem;
	BOOL _wantsDefaultMediaPlayer;
	NSURL* _url;
	NSString* _title;
	NSURL* _urlForDisplay;
	NSString* _contentType;
	NSString* _password;
	double _autoPlaybackPosition;
	UIColor* _backgroundColorOverride;

}

@property (readonly) NSUUID * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (retain) NSURL * urlForDisplay;                                    //@synthesize urlForDisplay=_urlForDisplay - In the implementation block
@property (retain) NSString * contentType;                                   //@synthesize contentType=_contentType - In the implementation block
@property (retain) NSString * password;                                      //@synthesize password=_password - In the implementation block
@property (assign) long long index;                                          //@synthesize index=_index - In the implementation block
@property (assign) BOOL isPromisedItem;                                      //@synthesize isPromisedItem=_isPromisedItem - In the implementation block
@property (assign) double autoPlaybackPosition;                              //@synthesize autoPlaybackPosition=_autoPlaybackPosition - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorOverride;              //@synthesize backgroundColorOverride=_backgroundColorOverride - In the implementation block
@property (assign,nonatomic) BOOL wantsDefaultMediaPlayer;                   //@synthesize wantsDefaultMediaPlayer=_wantsDefaultMediaPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(id)encodedClasses;
+(id)proxyWithPreviewItem:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(UIColor *)backgroundColorOverride;
-(void)setBackgroundColorOverride:(UIColor *)arg1 ;
-(BOOL)wantsDefaultMediaPlayer;
-(void)issueFileExtension;
-(void)consumeFileExtension;
-(double)autoPlaybackPosition;
-(id)initWithPreviewItem:(id)arg1 ;
-(NSURL *)urlForDisplay;
-(void)setUrlForDisplay:(NSURL *)arg1 ;
-(void)setIsPromisedItem:(BOOL)arg1 ;
-(void)setAutoPlaybackPosition:(double)arg1 ;
-(void)setWantsDefaultMediaPlayer:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)contentType;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)index;
-(NSURL *)previewItemURL;
-(id)previewItemContentType;
-(id)previewItemURLForDisplay;
-(NSString *)previewItemTitle;
-(NSUUID *)uuid;
-(void)setIndex:(long long)arg1 ;
-(BOOL)isPromisedItem;
@end

