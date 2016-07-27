//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DownloaderDelegate-Protocol.h"

@class Downloader, NSString, StorePackInfo;
@protocol StorePackInfoDownloaderDelegate;

@interface StorePackInfoDownloader : NSObject <DownloaderDelegate>
{
    id <StorePackInfoDownloaderDelegate> _delegate;
    StorePackInfo *_packInfo;
    Downloader *_downloader;
    NSString *_errorMessage;
}

@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) Downloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) StorePackInfo *packInfo; // @synthesize packInfo=_packInfo;
@property(nonatomic) __weak id <StorePackInfoDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getErrorMessage;
- (id)getPackInfo;
- (void)downloaderError:(id)arg1;
- (void)downloaderProceed:(id)arg1;
- (void)downloaderFinished:(id)arg1;
- (void)cancel;
- (void)downloadDetail:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStorePackInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
