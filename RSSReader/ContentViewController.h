//
//  ContentViewController.h
//  RSSReader
//
//  Created by Dias Nurul Arifin on 4/18/14.
//  Copyright (c) 2014 Dias Nurul Arifin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *webView;

@property (nonatomic, strong) NSString *url;

@end
