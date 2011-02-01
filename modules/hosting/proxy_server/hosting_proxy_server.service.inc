<?php
class hostingService_proxy extends hostingService {
  public $service = 'proxy';
}


class hostingService_proxy_public extends hostingService_proxy {
  protected $has_port = TRUE;

  function default_port() {
    return 80;
  }

  function update() {
    parent::update();
  }

  public function context_options($task_type, $ref_type, &$task) {
    parent::context_options($task_type, $ref_type, $task);
  }
}

class hostingService_proxy_varnish extends hostingService_proxy_public {
  public $type = 'varnish';

  protected $has_restart_cmd = FALSE;

  function default_restart_cmd() {
    return '';
  }
}

class hostingService_proxy_squid extends hostingService_proxy_public {
  public $type = 'squid';

  protected $has_restart_cmd = FALSE;

  function default_restart_cmd() {
    return '';
  }
}
