/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/ICSearchIndexFile.h>
#import <libobjc.A.dylib/ICSearchQueryable.h>

@class NSString, NSURL;

@interface ICContentIndexSearchIndexFile : NSObject <ICSearchIndexFile, ICSearchQueryable> {

	unsigned _tid;
	CXIndexRef _index;
	NSURL* _url;

}

@property (assign,nonatomic) CXIndexRef index;                    //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned tid;                        //@synthesize tid=_tid - In the implementation block
@property (nonatomic,copy) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
-(unsigned)creationOptions;
-(void)dealloc;
-(NSString *)name;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(CXIndexRef)index;
-(void)close;
-(void)setIndex:(CXIndexRef)arg1 ;
-(unsigned)sharedOptions;
-(void)removeDocumentsForIdentifiers:(id)arg1 ;
-(BOOL)opened;
-(void)setTid:(unsigned)arg1 ;
-(void)removeDocumentForIdentifier:(id)arg1 ;
-(BOOL)createWithURL:(id)arg1 ;
-(BOOL)openWithURL:(id)arg1 transactionId:(id*)arg2 ;
-(void)addDocumentWithIdentifier:(id)arg1 content:(id)arg2 transactionId:(id*)arg3 ;
-(unsigned)tid;
-(id)newQueryWithSearchTerms:(id)arg1 ;
-(void)cancelQuery:(id)arg1 ;
-(id)findNextMatchingIdentifiersForQuery:(id)arg1 isDone:(BOOL*)arg2 ;
@end

